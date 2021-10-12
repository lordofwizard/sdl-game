#ifndef __main.h__
#define __main.h__

#include <SDL2/SDL.h>

struct Game{
  // some methods 
  void init(const char* title, int xpos ,int ypos ,int width ,int height, bool fullscreen);
  void update();
  void render();
  void handleEvents();

  // some data.
  bool isRunning = false;
  SDL_Window* window;
  SDL_Renderer* renderer;

};

#endif
