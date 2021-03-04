ARG GITLEAKS_VERSION=7.2.0
ARG DIVE_VERSION=0.9.2
ARG GITPOD_VERSION=latest

FROM gitpod/workspace-full-vnc:$GITPOD_VERSION

RUN sudo apt-get update \
  && sudo rm -rf /var/lib/apt/lists/*

COPY --from=zricethezav/gitleaks:v$GITLEAKS_VERSION [ "/usr/bin/gitleaks", "/usr/bin/gitleaks" ]
COPY --from=wagoodman/dive:v$DIVE_VERSION [ "/usr/local/bin/dive", "/usr/local/bin/dive" ]
