#include <stdio.h>
#include <stdlib.h>

#include "SDL.h"
#include "SDL_opengl.h"

int main( int argc, char **argv )
{
	if( SDL_Init(SDL_INIT_VIDEO) != 0 ) {
		printf("Unable to initialize SDL: %s\n", SDL_GetError());
		return 1;
	}
	
	SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );
	SDL_Surface* screen = SDL_SetVideoMode( 640, 480, 16, SDL_OPENGL );
	
	glEnable( GL_TEXTURE_2D );
	
	glClearColor( 1.0f, 1.0f, 0.0f, 1.0f );
 
	glViewport( 0, 0, 640, 480 );
	 
	glClear( GL_COLOR_BUFFER_BIT );
	 
	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	 
	glOrtho(0.0f, 640, 480, 0.0f, -1.0f, 1.0f);
	 
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();
	
	BOOL running = TRUE;
	SDL_Event event;
	
	while(running) {
		while(SDL_PollEvent(&event)) {
			switch(event.type){
				case SDL_QUIT:
					running = 0;
					break;
			}
		}
	}
	
	return 0;
} 