# Package Container

## Overview
C++ implementation of a container specifically designed for managing `Package` objects. Each `Package` includes a unique ID, a size attribute, and a 1 MB payload. The container offers fast lookup by ID, maintains insertion order, and includes a feature to find the nth largest package. A global addition counter is also implemented, incrementing with each new package insertion.

## Features
- **Lookup by ID**: Quickly find packages using their unique ID.
- **Insertion Order Maintenance**: Iterate over packages in the order they were added.
- **Nth Largest Package**: Efficiently locate the nth largest package in the container.
- **Global Additions Counter**: Track the total number of packages added.

## Getting Started

### Prerequisites
- C++ Compiler (C++11 or later)
- Git (for cloning the repository)

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/dradamdev/PackageContainer.git
   ```
2. Navigate to the project directory:
   ```bash
   cd PackageContainer
   ```

### Building the Project
- Compile the project using your preferred C++ compiler. For example, with g++:
  ```bash
  g++ -std=c++11 src/*.cpp -I include -o packageContainerDemo
  ```

### Running the Demo
- After building, run the executable:
  ```bash
  ./packageContainerDemo
  ```

## Documentation (to be added)
For more detailed information, please refer to the documents in the `docs` directory:
- **Developer Guidelines**: `docs/DEVELOPER.md`
- **API Documentation**: `docs/API.md`
- **Design Overview**: `docs/DESIGN.md`

## Contributing
Contributions to the PackageContainer project are welcome. Please refer to `CONTRIBUTING.md` for detailed contribution guidelines.

## License
[MIT License] - see the `LICENSE` file for details.
