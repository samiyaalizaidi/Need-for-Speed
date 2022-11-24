#include "spaceship.hpp"

spaceship::spaceship(){
    coord.x = 0;
    coord.y = 50;
    srcRect = {22, 28, 71, 70};
    moverRect = {550, 350, 71, 70};
}

void spaceship::adjust(){
    srcRect = {22, 28, 71, 70};
}

void spaceship::moveup(){
    coord.y--; // y coordinate must increase when this function is called.
    coord.x++; // x coordinate will also be increased as the ship keeps on moving.
    if(!(moverRect.y <= 0)){
        moverRect.y -= 10;
        if ((srcRect.x == 22 && srcRect.y == 28) || (srcRect.x == 422 && srcRect.y == 124))
        {
            srcRect = {118, 133, 71, 70};

        }
    }
}
void spaceship::move_down(){
    coord.y++; // y coordinate must decrease when this function is called.
    coord.x++; // x coordinate will also be increased as the ship keeps on moving.
    if(!(moverRect.y >= 625)){
        moverRect.y += 5;
        if ((srcRect.x == 22 && srcRect.y == 28) || (srcRect.x == 118 && srcRect.y == 133))
        {
            srcRect = {422, 124, 71, 70};

        }
    }
}

void spaceship::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets_ship, &srcRect, &moverRect);
}

void spaceship::changeship(SDL_Rect sr = {12, 18, 71, 70}){ // to change the ship to show movement
    srcRect = sr;
}