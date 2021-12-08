cmake_minimum_required(VERSION 3.21)
project(makentoshe_arduino_pid_test)

set(CMAKE_CXX_STANDARD 14)

add_executable(makentoshe_arduino_pid_test main.cpp regulator/Regulator.h regulator/mean/int/IntMeanRegulator.h regulator/mean/int/IntMeanRegulator.cpp regulator/mean/uint8/UInt8MeanRegulator.h regulator/mean/uint8/UInt8MeanRegulator.cpp regulator/mean/MeanRegulator.h regulator/mean/MeanRegulator.cpp)
