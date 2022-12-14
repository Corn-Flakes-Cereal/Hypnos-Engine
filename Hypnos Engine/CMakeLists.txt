# CMakeList.txt : CMake project for Hypnos Engine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (HypnosEngine "Hypnos Engine.cpp" "Hypnos Engine.h" "shader.cpp")

target_link_libraries (HypnosEngine 
	glfw
	libglew_static
)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET HypnosEngine PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
