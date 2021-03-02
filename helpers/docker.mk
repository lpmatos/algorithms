# ================================================
# DOCKER VARIABLES
# ================================================
DOCKER_CONTAINER_LIST := $(shell docker ps -aq)

# ================================================
# DOCKER SHORTCUTS
# ================================================
docker-requirements:
	@echo "==> 🌐 Checking docker requirements..."
	@command -v docker >/dev/null || ( echo "ERROR: 🆘 Docker binary not found. Exiting." && exit 1)
	@docker info >/dev/null || ( echo "ERROR: 🆘 command "docker info" is in error. Exiting." && exit 1)
	@echo "==> ✅ Docker requirements are met!"

ds: docker-requirements
	$(if $(strip $(DOCKER_CONTAINER_LIST)), docker stop $(DOCKER_CONTAINER_LIST))

dr: docker-requirements
	$(if $(strip $(DOCKER_CONTAINER_LIST)), docker rm $(DOCKER_CONTAINER_LIST))

dvp: docker-requirements
	@echo "==> 🤖 Docker volume prune..."
	@docker volume prune -f
	@echo "==> ✅ Finish!"

dnp: docker-requirements
	@echo "==> 🤖 Docker network prune..."
	@docker network prune -f
	@echo "==> ✅ Finish!"

dsp: docker-requirements
	@echo "==> 🤖 Docker system prune..."
	@docker system prune -af
	@echo "==> ✅ Finish!"

dc: ds dr dvp dnp
	@echo "==> 🌊 Finish cleaning docker environment!"

ddc: ds dr dvp dnp dsp
	@echo "==> 🌊 Finish deep cleaning docker environment!"

# ================================================
# DOCKER COMPOSE SHORTCUTS
# ================================================
docker-compose-requirements:
	@echo "==> 🌐 Checking docker compose requirements..."
	@command -v docker-compose >/dev/null || ( echo "ERROR: 🆘 Docker Compose binary not found. Exiting." && exit 1)
	@echo "==> ✅ Docker Compose requirements are met!"

dcu: docker-compose-requirements
	@echo "==> 🤖 Docker compose up..."
	@docker-compose up --build
	@echo "==> ✅ Finish!"

dcub: docker-compose-requirements
	@echo "==> 🤖 Docker compose up in background..."
	@docker-compose up --build -d
	@echo "==> ✅ Finish!"

dcd: docker-compose-requirements
	@echo "==> 🤖 Docker compose down..."
	@docker-compose down
	@echo "==> ✅ Finish!"

dcps: docker-compose-requirements
	@echo "==> 🤖 Docker compose ps..."
	@docker-compose ps
	@echo "==> ✅ Finish!"

dcr: dcps dcd dcu
ifneq ("$(wildcard $(./.env.test))","")
	@dcps dcd dcu
endif

dcrb: dcps dcd dcub
ifneq ("$(wildcard $(./.env.test))","")
	@dcps dcd dcub
endif
