cmake_minimum_required(VERSION 3.30)

project(OpenBattleSimulator VERSION 0.1 LANGUAGES CXX)

# Main executable
add_executable(OBSim 
    ./src/obsim.cpp
    ./src/initializer.cpp
)

# Include directory to link library
target_include_directories(OBSim
    PUBLIC ./json/include/
)

# Other Tools
#[=[
add_executable(RunBattles, runbattles.cpp)
]=]
