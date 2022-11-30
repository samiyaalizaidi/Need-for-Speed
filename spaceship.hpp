#include "position.hpp"
#include "attackManager.hpp"
#include "drawing.hpp"
// #include "game.hpp"
#include <SDL.h>
#pragma once

class spaceship{
    // attributes
    position coord;
    Performance health;
    SDL_Rect srcRect, moverRect; // for moving the ship
    
    public:
        // function members
        spaceship(); // constructor
        void draw(); // SDL rendering
        void mover(int); // to move the spaceship horizontally for now
        void moveup();
        void move_down();
        void changeship(SDL_Rect sr);
        void adjust();
        int getX(); // returns the x coordinate of the ship
        int getY(); // return the y coordinate of the ship
        void showAttack(int); // displays the attack sprite.
        SDL_Rect getRect();
};      