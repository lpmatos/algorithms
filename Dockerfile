ARG ALPINE_VERSION=3.11

FROM alpine:${ALPINE_VERSION}

LABEL maintainer="Lucca Pessoa da Silva Matos - luccapsm@gmail.com" \
        org.label-schema.version="1.0" \
        org.label-schema.release-data="2020-04-04" \
        org.label-schema.url="https://github.com/lpmatos" \
        org.label-schema.name="Algorithms Implementation"

ENV HOME=/usr/src/code

RUN set -ex && apk update && \
    apk add --update --no-cache alpine-sdk

WORKDIR ${HOME}

COPY [ "./algorithms", "." ]

ENTRYPOINT []

CMD []
