#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdbool.h>
#include <game.h>
int main(){
      const unsigned short int fps = 60;
      const unsigned short int frameDelay = 1000/fps;

      // initialization of the window
      init("game",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1280,720,false);
      
      // This integer is gonna be big because it has all the frames
      long long int frameStart;
      int frameTime; // This integer stores temprary frametime per 1000 miliseconds (16 ms) is GOOD.
      
      // Game loop
      while(isRunning){
            frameStart = SDL_GetTicks();
            render();
            frameTime = SDL_GetTicks() - frameStart;
            printf("Current Frame Time is %d ms", frameTime);
            handleEvents();
      if(frameDelay > frameTime){
            SDL_Delay(frameDelay);
      }
      }

      return 0;
}
