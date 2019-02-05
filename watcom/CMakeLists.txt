cmake_minimum_required (VERSION 2.8)
project (wcbound CXX C)

add_executable(bound bound.cpp)
add_executable(reverse reverse.cpp)
add_executable(intstr intstr.cpp)
add_executable(class1 class1.cpp)
add_executable(check1 check1.cpp)

# setenv.bat
# cmake .. -G"Watcom WMake"
# cmake --build .