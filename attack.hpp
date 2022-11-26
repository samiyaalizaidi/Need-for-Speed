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
        void move_up();
        int getX(); // returns the x coordinate of the attack
        int getY(); // returns the y coordinate of the attack
        virtual void setAttack() = 0;        
};