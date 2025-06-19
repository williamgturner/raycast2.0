#include <stdio.h>
#include <SDL3/SDL.h>

SDL_Window *window;
SDL_Renderer *renderer;

int main() {
    SDL_Init(SDL_INIT_VIDEO);
    bool done = false;

    window = SDL_CreateWindow(
        "raycaster",
        640,
        480,
        SDL_WINDOW_OPENGL
    );

    if (window == NULL) {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
        return 1;
    }

    while (!done) {
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                done = true;
            }
        }

        // Do game logic, present a frame, etc.
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}