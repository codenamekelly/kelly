/*
  Copyright (C) 1997-2011 Sam Lantinga <slouken@libsdl.org>

  This software is provided 'as-is', without any express or implied
  warranty.  In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely.
*/

#include <stdio.h>
#define SDL_NO_COMPAT

#include <SDL\SDL.h>
int main( int argc, char **argv )
{
	SDL_Window *win = NULL;
	int width = 320, height = 240;

	if (SDL_Init(SDL_INIT_VIDEO)) {
		printf("ERROR: SDL_INIT_VIDEO filed\n");
	return -1;
	}
	printf("INFO : win = %p\n", win); // printing (nil)

	win = SDL_CreateWindow ("Hello World", 10, 10, width, height, SDL_WINDOW_RESIZABLE);
	if(win == NULL) {
		printf("ERROR: SDL_CreateWindow Failed\n");
		return -1;
	}
	printf("INFO : SDL_CreateWindow Success win = %p\n", win);

	SDL_ShowWindow(win);
	SDL_DestroyWindow(win);

	return 0;
} 