cmake_minimum_required(VERSION 2.8)

# c++14
set (CMAKE_CXX_STANDARD 14)

project(quarticSolver)

# eigen3 headers
find_package( PkgConfig )
pkg_check_modules( EIGEN3 REQUIRED eigen3 )
include_directories( ${EIGEN3_INCLUDE_DIRS} )

add_executable(${PROJECT_NAME} "quarticSolver.cpp")
