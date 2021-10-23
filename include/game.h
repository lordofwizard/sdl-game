#ifndef __main.h__
#define __main.h__

#include <SDL2/SDL.h>
#include <stdbool.h>

  void init(const char* game_name, int xpos ,int ypos ,int width ,int height, bool fullscreen);
  void update();
  void render();
  void handleEvents();
      void clear();
#endif
