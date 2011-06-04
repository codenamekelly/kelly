if (NOT SDL_SOURCE_NAME)
	set (SDL_SOURCE_NAME "SDL-1.3.0" CACHE STRING "SDL source name")
endif (NOT SDL_SOURCE_NAME)

#Unzip SDL
execute_process(
	COMMAND ${CMAKE_COMMAND} -E tar xzf ${NED_SOURCE_DIR}/thirdparty/${SDL_SOURCE_NAME}.zip
	WORKING_DIRECTORY ${NED_SOURCE_DIR}/thirdparty
)