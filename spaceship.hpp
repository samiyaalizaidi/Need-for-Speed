#include "position.hpp"
#include "performance.hpp"
#include "drawing.hpp"
#include <SDL.h>
#pragma once

class spaceship{
    // attributes
    position coord;
    performance health;
    SDL_Rect srcRect, moverRect; // for moving the ship

    public:
        // function members
        spaceship(); // constructor
        void draw(); // SDL rendering
        void mover(); // to move the spaceship
        void moveup();
        void move_down();

        // void shoot(){ what are we doing here
        //     //what type of attck
        //     //what happen when attacked?
        // }
};      // work for moving left and right?