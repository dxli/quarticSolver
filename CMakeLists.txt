cmake_minimum_required(VERSION 2.6)
project(quarticSolver)

#There are lots of scripts with cmake
#for finding external libraries. 
#see /usr/local/share/cmake-2.6/Modules/Find*.cmake for more examples
#find_package(GLUT)
#find_package(OpenGL)
set(CMAKE_MODULE_PATH ".")
set(CMAKE_CXX_FLAGS "-march=native -fomit-frame-pointer -Wall")
set(PROGRAMS quarticSolver)
foreach(program ${PROGRAMS})
  add_executable(${program} ${program}.cpp)
  target_link_libraries(${program} ${CORELIBS} )
endforeach(program)

