#include "diamond.hpp"
#include <iostream>
//#include "game.hpp"

diamond::diamond(int x, int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {1,1,711,517};
     // setting pigeon x and y values
    moverRect = {x,y,50,50};
}

diamond::diamond(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    moverRect =  {500,450,100,100};
     // setting pigeon x and y values
    srcRect = {1,1,711,517};
}


void diamond::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::diamond, &srcRect, &moverRect);  //makes the object
}

void diamond::move(){
   /*  if (moverRect.x < 0){
     //   count ++;
        moverRect.x = 980;
        moverRect.x -= 13;}
    else{moverRect.x -=10;} */
    moverRect.x -=10;
} 

int diamond::getX(){
    return moverRect.x;
}

int diamond::getY(){
    return moverRect.y;
}