add_subdirectory(vendor/spdlog)

file(GLOB_RECURSE source_list "src/*.cpp" "src/*.hpp")
add_library(DarkBishop ${source_list} src/DarkBishop.hpp)

target_include_directories(DarkBishop 
    PUBLIC 
        src
    PRIVATE 
        spdlog::spdlog_header_only
)

target_link_libraries(DarkBishop
    PUBLIC
        spdlog::spdlog
)