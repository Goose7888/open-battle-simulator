# Open Battle Simulator (OBSim)

This is Open Battle Simulator - an open source replica of Pokemon Battles.

This project intends do nothing more than a headless program that 
other projects can use as C++ library.

Additionally, imitating the Pokemon Ruby and Saphhire mechanics
is the main goal right now.

# Build Instructions

CMake needs to be installed. The project is configured
with CMake 3.30 as the minimum version, but that will likely
be lowered.

There may be things requiring gcc and Linux... Hopefully not! :D

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
# Contributing

I'm a beginner (if you couldn't tell).

In particular, I'm still learning git's branch structuring and CMake.
If you have any tips, concerns, or vigorous beratement, feel free to message me at <cynder@goose-games.com>
