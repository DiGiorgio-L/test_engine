#include <iostream>

#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char *argv[]) {
  SDL_SetAppMetadata("Testing Engine", "Pre-Alpha: 0.1", "com.engine.testing");

  if (SDL_Init(SDL_INIT_VIDEO) == false) {
    SDL_Log("[ERROR]: Unable to initialize video subsystem: %s", SDL_GetError());
    return -1;
  }
  else SDL_Log("[TRACE]: Video subsystem successfully initialized!!");

  SDL_Window* window = SDL_CreateWindow("Testing Engine Pre-Alpha: 0.1", 1280, 720, SDL_WINDOW_OPENGL);
  if (window == NULL) {
    SDL_Log("[ERROR]: Unable to create window: %s", SDL_GetError());
    return -1;
  }
  else SDL_Log("[TRACE]: Window successfully created!!");
  
  // NOTE: Window does not stay open.
  // TODO: Set up main loop & handle events.

  SDL_Quit();
  return 0;
}