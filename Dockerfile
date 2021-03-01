FROM alpine:3.13.1

RUN apk update && apk add --no-cache bash gcc g++

WORKDIR /usr/src/code

COPY [ "./src", "." ]
