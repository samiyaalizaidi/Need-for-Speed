#include "spaceship.hpp"

spaceship::spaceship(){
    coord.x = 0;
    coord.y = 50;
    srcRect = {12, 18, 71, 70};
    moverRect = {550, 350, 71, 70};
}

void spaceship::adjust(){
    srcRect = {12, 18, 71, 70};
}

void spaceship::moveup(){
    coord.y--; // y coordinate must increase when this function is called.
    coord.x++; // x coordinate will also be increased as the ship keeps on moving.
    if(!(moverRect.y <= 0)){
        moverRect.y -= 10;
        if ((srcRect.x == 12 && srcRect.y == 18) || (srcRect.x == 412 && srcRect.y == 114))
        {
            srcRect = {108, 123, 71, 70};

        }
    }
}
void spaceship::move_down(){
    coord.y++; // y coordinate must decrease when this function is called.
    coord.x++; // x coordinate will also be increased as the ship keeps on moving.
    if(!(moverRect.y >= 625)){
        moverRect.y += 5;
        if ((srcRect.x == 12 && srcRect.y == 18) || (srcRect.x == 108 && srcRect.y == 123))
        {
            srcRect = {412, 114, 71, 70};

        }
    }
}

void spaceship::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void spaceship::changeship(SDL_Rect sr = {12, 18, 71, 70}){ // to change the ship to show movement
    srcRect = sr;
}

void spaceship::showAttack(){
    srcRect = {24, 319, 57, 62};
}

int spaceship::getX(){
    return moverRect.x;
}

int spaceship::getY(){
    return moverRect.y;
}   

SDL_Rect spaceship::getRect(){
    return moverRect;
}