file(GLOB_RECURSE source_list "src/*.cpp" "src/*.hpp")
add_library(DarkBishop ${source_list} src/DarkBishop.hpp)
target_include_directories(DarkBishop PUBLIC src)