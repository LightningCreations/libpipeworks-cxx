#include <SDL2/SDL.h>

namespace pipeworks {
    class Engine {
    public:
        Engine();
        void init();
        void start();
        ~Engine();
    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
        SDL_Texture *texture;
        uint8_t *pixels;
    };
}
