FROM ubuntu:22.04

# Install necessary packages
RUN apt-get update && apt-get install -y \
    g++ \
    cmake \
    libpq-dev \
    wget

# Copy the C++ source code
COPY . /usr/src/myapp

# Set the working directory
WORKDIR /usr/src/myapp

# Build the application
RUN cmake . && make

# Command to run the application
CMD ["./service"]

