#ifndef __main_h__
#define __main_h__

SDL_Window * window;
SDL_Renderer * renderer;

#include <SDL2/SDL.h>
#include <stdbool.h>

      bool isRunning ;
      void init(const char* game_name, int xpos ,int ypos ,int width ,int height, bool fullscreen);
      void update();
      void render();
      void handleEvents();
      void clear();
#endif
