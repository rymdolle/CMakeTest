FROM alpine
WORKDIR /build

# Install deps
RUN apk update
RUN apk add --no-cache bash cmake make g++

# Create build script
COPY <<EOF /build/run.sh
#!/bin/bash
if [[ ! -d "/src" ]]; then
    echo "No source directory found."
    echo "Mount your source code to /src"
    exit 1
fi
cmake -S /src -B .
cmake --build .
./HelloCMake
EOF
RUN chmod +x /build/run.sh

CMD [ "/build/run.sh" ]
