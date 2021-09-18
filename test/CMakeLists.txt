file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.cpp)
file(GLOB_RECURSE HEADERS LIST_DIRECTORIES true *.h)

add_executable(test ${SOURCES})
target_link_libraries(test PUBLIC gtest)