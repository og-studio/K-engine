#include "SDLUtils.hpp"
#include <iostream>
#include <SDL2/SDL.h>
#include "../Engine.h"

namespace ENGINE
{
    SDL_Window *GUIWindow = NULL;
    SDL_Renderer *GUIRenderer = NULL;
    SDL_Surface *GUIscreenSurface = NULL;

    bool initSDL()
        {
            bool status = true;

            if(SDL_Init(SDL_INIT_VIDEO) < 0)
            {
                printf("ERROR: failed to init the engine: %s\n", SDL_GetError());
                status = false;
            }
            else
            {
                GUIWindow = SDL_CreateWindow("K-Engine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 800, SDL_WINDOW_SHOWN); //TODO: replace resX & resY with values from settings.h
                if(GUIWindow == NULL)
                {
                    printf("ERROR: cannot create a window: %s\n", SDL_GetError());
                    status = false;
                }

                GUIRenderer = SDL_CreateRenderer(GUIWindow, -1, 0);
                if(GUIRenderer = NULL)
                {
                    printf("ERROR: cannot create a renderer: %s\n", SDL_GetError());
                    status = false;
                }

                SDL_GetWindowSurface(GUIWindow);
            

            }

            return status;
        }

    void SDLQuit()
    {
        SDL_DestroyWindow(GUIWindow);
        SDL_DestroyRenderer(GUIRenderer);
        SDL_FreeSurface(GUIscreenSurface);
    }

}