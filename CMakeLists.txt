cmake_minimum_required(VERSION 3.18)

project(OpenBattleSimulator VERSION 0.1 LANGUAGES CXX)

set(CMAKE_BUILD_TYPE Debug)

# Main executable
add_executable(OBSim 
    ./src/obsim.cpp
    ./src/initializer.cpp
    ./src/pokemonData.cpp
    ./src/team.cpp
    ./src/battle.cpp
    ./src/pokemon.cpp
)

# Include directory for compiler
target_include_directories(OBSim
    PUBLIC ./json/include/
)

# Compiler Settings
# TODO Make System Agnostic
add_compile_options(-Wall -Wextra)

# Other Tools
#[=[
add_executable(RunBattles, runbattles.cpp)
]=]
