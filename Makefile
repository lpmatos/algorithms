MAKEFLAGS += --warn-undefined-variables

# It's necessary to set this because some environments don't link sh -> bash.
SHELL := /usr/bin/env bash

##################################################
# HELPER
##################################################

.PHONY: help
help:
	@echo ""
	@echo "***************************"
	@echo "* 🤖 Management commands"
	@echo "* "
	@echo "* Usage:"
	@echo "* "
	@echo "*  🎉 Short commands 🎉"
	@echo "* "
	@echo "* 📌 make global-requirements"
	@echo "* 📌 make yarn-requirements"
	@echo "* 📌 make npm-requirements"
	@echo "* 📌 make yarn-version"
	@echo "* 📌 make npm-version"
	@echo "* 📌 make yarn-install"
	@echo "* 📌 make npm-install"
	@echo "* 📌 make verify"
	@echo "* 📌 make release-debug"
	@echo "* 📌 make release"
	@echo "* "
	@echo "***************************"
	@echo ""

##################################################
# SHORTCUTS
##################################################

global-requirements:
	@echo "==> 🌐 Checking global requirements..."
	@command -v gitleaks >/dev/null || ( echo "ERROR: 🆘 gitleaks binary not found. Exiting." && exit 1)
	@command -v git >/dev/null || ( echo "ERROR: 🆘 git binary not found. Exiting." && exit 1)
	@echo "==> ✅ Global requirements are met!"

yarn-requirements:
	@echo "==> 📜 Checking yarn requirements..."
	@command -v yarn >/dev/null || ( echo "ERROR: 🆘 yarn binary not found. Exiting." && exit 1)
	@echo "==> ✅ Package requirements are met!"

npm-requirements:
	@echo "==> 📜 Checking npm requirements..."
	@command -v npm >/dev/null || ( echo "ERROR: 🆘 npm binary not found. Exiting." && exit 1)
	@echo "==> ✅ Package requirements are met!"

yarn-version: yarn-requirements
	@echo "==> ✨ Yarn version: $(shell yarn --version)"

npm-version: npm-requirements
	@echo "==> ✨ NPM version: $(shell npm --version)"

yarn-install:
	@echo "==> 🔥 Yarn install packages..."
	@yarn install

npm-install:
	@echo "==> 🔥 NPM install packages..."
	@npm install

verify: yarn-install
ifeq ($(GITLAB_TOKEN),)
	@echo "ERROR: 🆘 no gitlab token was provided - undefined variable. Exiting." && exit 1
else
	@echo "==> 🎊 We have a gitlab token!"
endif

release-debug: verify
	@echo "==> 📦 Runnig release debug..."
	@yarn run release-debug

release: verify
	@echo "==> 📦 Runnig release..."
	@yarn run release
