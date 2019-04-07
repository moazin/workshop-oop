#include <pieas_draw.hpp>
#include <vector>
#include <SDL.h>

using namespace std;

int drawCanvas(vector<vector<int>> canvas){
    int height = canvas.size();
    int width = canvas[0].size();
    bool quit = false;
    SDL_Event event;

    SDL_Window *window;
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow(
        "An SDL2 window",                  // window title
        SDL_WINDOWPOS_UNDEFINED,           // initial x position
        SDL_WINDOWPOS_UNDEFINED,           // initial y position
        width,                               // width, in pixels
        height,                               // height, in pixels
        SDL_WINDOW_OPENGL                  // flags - see below
    );
    // Check that the window was successfully created
    if (window == NULL) {
        // In the case that the window could not be made...
        return 1;
    }

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    SDL_Texture *texture = SDL_CreateTexture(renderer, 
        SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STATIC, width, height);
    Uint32 *pixels = new Uint32[width*height];

    // copy into pixels
    int count = 0;
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++){
            pixels[count] = canvas[i][j]; 
            count++;
        }
    }

    while(!quit){
        SDL_UpdateTexture(texture, NULL, pixels, width * sizeof(Uint32));
        SDL_WaitEvent(&event);
        switch(event.type)
        {
            case SDL_QUIT:
                quit = true;
                break;
        }
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);
    } 

    delete[] pixels;
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    // Close and destroy the window
    SDL_DestroyWindow(window);
    // Clean up
    SDL_Quit();
	return 0;
}
