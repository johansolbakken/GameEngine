
add_executable(Sandbox src/main.cpp)

target_link_libraries(Sandbox PUBLIC DarkBishop)
target_include_directories(Sandbox PUBLIC src ../DarkBishop/src)