file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true src/*.cpp)
file(GLOB_RECURSE HEADERS LIST_DIRECTORIES true inc/*.h)

add_executable(executable_name ${SOURCES})
target_include_directories(executable_name PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/inc)

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

#target_link_libraries(executable_name PUBLIC common)

install(TARGETS executable_name)