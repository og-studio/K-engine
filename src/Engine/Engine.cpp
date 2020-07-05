#include <iostream>
#include <SDL2/SDL.h>

#include "Engine.h"
#include "GUI/SDLUtils.hpp"
#include "Settings.h"



void ENGINE::Start()
{
    SDL_Event e;
    bool isRunning = true;

    Settings settings();

    if(ENGINE::initSDL())
    {
        std::cout << "starting engine..." << std::endl;
        while(isRunning && !SDL_PollEvent(&e))
        {
            if(e.type == SDL_QUIT)
            {
                ENGINE::SDLQuit();
            }
        }
        
    }
    
}

