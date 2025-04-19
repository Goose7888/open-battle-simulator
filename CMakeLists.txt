cmake_minimum_required(VERSION 3.30)

project(OpenBattleSimulator VERSION 0.1 LANGUAGES CXX)

# Main executable
add_executable(OBSim 
    ./src/obsim.cpp
)

set(CMAKE_TOOLCHAIN_FILE /home/goose/dev/vcpkg/scripts/buildsystems/vcpkg.cmake)

# Other Tools
#[=[
add_executable(RunBattles, runbattles.cpp)
]=]
