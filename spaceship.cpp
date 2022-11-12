#include "spaceship.hpp"

spaceship::spaceship(){
            coord.x = 0;
            coord.y = 50;
        }
void spaceship::moveup(){
    coord.y++; // y coordinate must increase when this function is called.
    coord.x++; // x coordinate will also be increased as the ship keeps on moving.
}
void spaceship::move_down(){
    coord.y--; // y coordinate must decrease when this function is called.
    coord.x++; // x coordinate will also be increased as the ship keeps on moving.
}

void spaceship::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void spaceship::mover(){
    srcRect = {100, 100, 53, 32};
    moverRect.x = 150;
}
