#include "game.h"
#include <stdio.h>
#include <SDL2/SDL.h>


Game::init(const char* title, int xpos ,int ypos ,int width ,int height, bool fullscreen){
  if(SDL_Init(SDL_INIT_EVERYTHING)){
    printf("Something went wrong %s" , SDL_GetError());
  }
}
