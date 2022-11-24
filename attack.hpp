#include <SDL.h>
#include <iostream>
#include "drawing.hpp"
#pragma once
class Attack{
    public:
        SDL_Rect srcRect;
        SDL_Rect moverRect;
        int health_dec;
        void draw();
        void move_NorthEast();
        void move_NorthWest();
        void move_SouthEast();
        void move_SouthWest();
        virtual void setAttack() = 0;        
};