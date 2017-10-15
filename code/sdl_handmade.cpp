#include <SDL.h>

int main(int argc, char *argv[])
{
  // SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "Handmade Hero", "This is Handmade Hero", 0);
  SDL_Window *Window = SDL_CreateWindow("Handmade Hero",
                                        SDL_WINDOWPOS_UNDEFINED,
                                        SDL_WINDOWPOS_UNDEFINED,
                                        640,
                                        480,
                                        SDL_WINDOW_RESIZABLE);

  return(0);
}
