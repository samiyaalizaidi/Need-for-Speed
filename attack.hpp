#include <SDL.h>
#pragma once
class Attack{
    public:
        int health_dec;
        void draw();
        void move_NorthEast(SDL_Rect coord);
        void move_NorthWest(SDL_Rect coord);
        void move_SouthEast(SDL_Rect coord);
        void move_SouthWest(SDL_Rect coord);
        virtual void setAttack() = 0;        
};