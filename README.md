# Open Battle Simulator (OBSim)

This is Open Battle Simulator - an open source replica of Pokemon Battles.

This project intends do nothing more than a headless program that 
other projects can use as C++ library.

Additionally, imitating the Pokemon Ruby and Sapphire mechanics
is the main goal right now.

# Features

The end goal is for this program to act as a library for a separate program to link to. 
For now (for lack of experience) an interactive console program only is on the works. 

Feature Wishlist:

- Team Builder
    - A way to build, export, and import teams.
- Battle Queue
    - Battles can be queued up, then simulated quickly.
- Gneration Picker
    - Pokemon Battles from every generation can be used.


# Build Instructions

CMake needs to be installed. The project is configured
with CMake 3.18 as the minimum version.

There may be things requiring gcc and Linux... Hopefully not! :D

- Clone and recursively clone submodules.
- Change Directory into project.
- Run CMake's configure
- Run CMake's build

```
git clone https://github.com/Goose7888/OBSim --recurse-submodules
cd OBSim
mkdir build
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
