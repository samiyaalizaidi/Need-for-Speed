#include "canon.hpp"

void Canon::setAttack(){
    std::cout << "canon launched" << std::endl;
    srcRect = {0, 0, 24, 24};
    moverRect = {78, 23, 24, 24};
}

Canon::Canon(int x, int y){
    // moverRect.x = x;
    // moverRect.y = y;
    srcRect = {0, 0, 24, 24};
    moverRect = {x, y, 24, 24};
}