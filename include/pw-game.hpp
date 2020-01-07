#ifndef PW_GAME_HPP
#define PW_GAME_HPP

#include "pw-engine.hpp"

namespace pipeworks {
    class Game {
    public:
        Game();
        Game(const Game&) = delete;
        Game(Game&&) = delete;
        Game& operator=(const Game&) = delete;
        Game& operator=(Game&&) = delete;
        virtual void loadState(Engine*) = delete;
        virtual void doneLoading(Engine*) = delete;
        ~Game();
    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
        SDL_Texture *texture;
        uint8_t *pixels;
    };
}
#endif
