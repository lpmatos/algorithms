FROM gitpod/workspace-full-vnc

RUN sudo apt-get update \
  && sudo rm -rf /var/lib/apt/lists/*

COPY --from=zricethezav/gitleaks:v7.2.0 [ "/usr/bin/gitleaks", "/usr/bin/gitleaks" ]
COPY --from=wagoodman/dive:v0.9.2 [ "/usr/local/bin/dive", "/usr/local/bin/dive" ]
