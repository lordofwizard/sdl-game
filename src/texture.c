#include <texture.h>
#include <game.h>

SDL_Texture* makeTexture(const char* file_path){
    SDL_Texture * texture = NULL;
    texture = IMG_LoadTexture(renderer,file_path);

    if(texture == NULL) printf("Failed to load Texture : %s\n", SDL_GetError());

     

}