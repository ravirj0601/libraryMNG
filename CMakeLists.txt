cmake_minimum_required(VERSION 3.10)

# Set the project name
project(LibraryMNG)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
    src/main.cpp
    src/users.cpp
    src/books.cpp
    src/openFile.cpp
    # ...add other source files here...
)

# Add the header files
set(HEADERS
    include/users.h
    include/books.h
    include/openFile.h
    # ...add other header files here...
)

# Add the executable
add_executable(LibraryMNG ${SOURCES} ${HEADERS})

# Link any necessary libraries
target_link_libraries(LibraryMNG -lrt)
