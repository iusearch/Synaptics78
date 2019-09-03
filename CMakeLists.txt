cmake_minimum_required(VERSION 3.12)
project(78Driver)

set(CMAKE_CXX_STANDARD 11)
link_libraries(libusb-1.0.so)
link_libraries(libopencv_core.so)
link_libraries(libopencv_imgcodecs.so)
add_executable(78Driver synaptics78.cpp)
