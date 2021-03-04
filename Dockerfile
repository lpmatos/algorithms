FROM python:3.9.2-alpine3.12

RUN apk update && \
    apk add --no-cache bash gcc g++

WORKDIR /usr/src/code

COPY [ "./algorithms", "." ]
