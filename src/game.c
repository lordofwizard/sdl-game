#include "game.h"
#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdbool.h>

SDL_Window * window;
SDL_Renderer * renderer;
void init(const char * game_name , int xpos , int ypos , int width, int height, bool fullscreen){
    int flags = 0;
    if(fullscreen){
        flags = SDL_WINDOW_FULLSCREEN;
    }
    if(!SDL_Init(SDL_INIT_EVERYTHING)) {
        window = SDL_CreateWindow(game_name, xpos, ypos, width, height, flags);
        if (window) {
              printf("Window is initialized\n");
        }

        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer) {
            SDL_SetRenderDrawColor(renderer, 100, 100, 0, 255);
            printf("Renderer is initialized\n");
        }
        isRunning = true;

    }
    else{
            printf("Some Error Occured Check it down\n %s",SDL_GetError());
        isRunning = false;
    }

}
void handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);

    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;

        default:
            break;
    }
}
void render(){
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}
void clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
      printf("Game Stopped");
}
void update(){

}





