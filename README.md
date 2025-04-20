# Build Instrcutions

CMake needs to be installed. The project is configured
with CMake 3.30 as the minimum version, but that will likely
be lowered.

There may be things requiring gcc and Linux? Hopefully not! :D

- Clone and recursively clone submodules.
- Change Directory into project.
- Run CMake's configure
- Run CMake's build

```
git clone https://github.com/Goose7888/OBSim --recurse-submodules
cd OBSim
cmake -B build
cmake --build build
cd build

# Run Program
OBSim
```
