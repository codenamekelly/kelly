cmake_minimum_required(VERSION 2.6)
project(NED)

# Build third party libs
#add_subdirectory(thirdparty)
FIND_PACKAGE( SDL REQUIRED )

IF( NOT SDL_FOUND )
	MESSAGE("SDL Required")
ELSE( NOT SDL_FOUND )
	# Build source
	add_subdirectory(src)	
ENDIF( NOT SDL_FOUND )



# Build tests
#add_subdirectory(test)