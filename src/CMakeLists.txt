include_directories($(INCLUDE_DIR))

add_executable(Ned main.c)

target_link_libraries(Ned $(SDL_LIBRARY))