#ifndef __main_h__
#define __main_h__


#include <SDL2/SDL.h>
#include <stdbool.h>
#include <SDL2/SDL_image.h>


extern SDL_Window * window;
extern SDL_Renderer * renderer;
extern bool isRunning ;

      void init(const char* game_name, int xpos ,int ypos ,int width ,int height, bool fullscreen);
      void update();
      void render();
      void handleEvents();
      void clear();
#endif
