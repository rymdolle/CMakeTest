FROM alpine
WORKDIR /build

# Install deps
RUN apk update
RUN apk add --no-cache bash cmake make g++

# Create build script
COPY <<EOF /build/run.sh
#!/bin/bash
cmake -S /src -B .
cmake --build .
./HelloCMake
EOF
RUN chmod +x /build/run.sh

CMD [ "/build/run.sh" ]
