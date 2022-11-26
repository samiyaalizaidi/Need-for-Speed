#include "attack.hpp"

void Attack::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::attack, &srcRect, &moverRect);
}

void Attack::move_NorthEast(){
    moverRect.x += 10;
    moverRect.y -= 10;
}

void Attack::move_NorthWest(){
    moverRect.x -= 10;
    moverRect.y -= 10;
}

void Attack::move_SouthEast(){
    moverRect.x += 10;
    moverRect.y += 10;
}

void Attack::move_SouthWest(){
    moverRect.x -= 10;
    moverRect.y += 10;
}

void Attack::move_up(){
    moverRect.y -= 10;
}

int Attack::getX(){
    return moverRect.x;
}

int Attack::getY(){
    return moverRect.y;
}