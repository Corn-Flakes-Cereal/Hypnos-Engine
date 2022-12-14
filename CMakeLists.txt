# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("Hypnos Engine")

# Include sub-projects.
add_subdirectory ("Hypnos Engine")
add_subdirectory ("glew")
add_subdirectory ("glfw")

target_include_directories (HypnosEngine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/glfw/include)

target_include_directories (HypnosEngine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/glew/include)


