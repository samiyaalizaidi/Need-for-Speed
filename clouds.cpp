#include "clouds.hpp"
#include <iostream>
//#include "game.hpp"

clouds::clouds(int x, int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {593, 35, 148,120 };
     // setting pigeon x and y values
    moverRect = {300,150,100,100};
}

clouds::clouds(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    moverRect =  {300,150,100,100};
     // setting pigeon x and y values
    srcRect = {593, 35, 148,120 };
}


void clouds::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::clouds, &srcRect, &moverRect);  //makes the object
    /* tick++;
    if(tick>10){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::clouds, &srcRect, &moverRect);  //makes the object
    moverRect = {100,150,100,100};
    if (frame == 0){
        srcRect = {593, 35, 148,120 };
        SDL_RenderCopy(Drawing::gRenderer, Drawing::clouds, &srcRect, &moverRect);  //makes the object
        }
    if (frame==1){
        srcRect = {548,195,208,100};
        SDL_RenderCopy(Drawing::gRenderer, Drawing::clouds, &srcRect, &moverRect); } //makes the object
    if (frame==2){srcRect = {342,23,204,90};}
    frame++; 
    if (frame == 3){frame = 0;}
    tick=0;
    } */
}

void clouds::move(){
    if (moverRect.x < 0){
     //   count ++;
        moverRect.x = 980;
        moverRect.x -= 13;}
    else{moverRect.x -= 13;}
} 
/* void clouds::animate(){
    
    tick ++;
    if (tick >25){
    cout << "created"<<endl;
    
    clouds *cld = new clouds(30,980);
    badal.push_back(cld);
    tick = 0;} */

