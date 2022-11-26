#include "diamond.hpp"
#include <iostream>
//#include "game.hpp"

diamond::diamond(int x, int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {1,1,711,517};
     // setting pigeon x and y values
    moverRect = {500,450,100,100};
}

diamond::diamond(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    moverRect =  {500,450,100,100};
     // setting pigeon x and y values
    srcRect = {1,1,711,517};;
}


void diamond::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::clouds, &srcRect, &moverRect);  //makes the object
}

void diamond::move(){
    if (moverRect.x < 0){
     //   count ++;
        moverRect.x = 1200;
        moverRect.x -= 13;}
    else{moverRect.x -= 13;}
} 
