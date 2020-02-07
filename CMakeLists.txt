cmake_minimum_required (VERSION 3.8)

find_package(Qt5Widgets)
find_package(Eigen3)

add_executable (MWE "MWE.cpp" "MWE.h")
target_link_libraries(MWE Qt5::Widgets Eigen3::Eigen)

