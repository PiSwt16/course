cmake_minimum_required (VERSION 2.8)

set(CMAKE_C_COMPILER "D:/BCC102/bin/bcc32c.exe")
set(CMAKE_CXX_COMPILER "D:/BCC102/bin/bcc32c.exe")

project (bcc)

add_executable(bound bound.cpp)
add_executable(reverse reverse.cpp)
add_executable(stringstream stringstream.cpp)
add_executable(class class.cpp)
add_executable(check check.cpp)

# setenv.bat
# cmake .. -G"Borland Makefiles"
# cmake --build .