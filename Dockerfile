FROM alpine
WORKDIR /build

# Install deps
RUN apk update
RUN apk add --no-cache bash cmake ninja g++

# Create build script
COPY ./run.sh /build/run.sh
RUN chmod +x /build/run.sh

CMD [ "/build/run.sh" ]
