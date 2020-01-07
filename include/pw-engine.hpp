#ifndef PW_ENGINE_HPP
#define PW_ENGINE_HPP

#include <SDL.h>

#include "pw-game.hpp"

namespace pipeworks {
    class Engine {
    public:
        Engine();
        Engine(const Engine&) = delete;
        Engine(Engine&&) = delete;
        Engine& operator=(const Engine&) = delete;
        Engine& operator=(Engine&&) = delete;
        void setGame(Game *game);
        void init();
        void start();
        void join();
        ~Engine();
    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
        SDL_Texture *texture;
        uint8_t *pixels;
    };
}
#endif
