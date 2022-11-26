#include "canon.hpp"

void Canon::setAttack(){
    std::cout << "canon launched" << std::endl;
    srcRect = {0, 0, 24, 24};
    moverRect = {78, 23, 24, 24};
}

Canon::Canon(std::string direction){

    // assigning positions depending on the direction of movement
    srcRect = {0, 0, 24, 24};
    if(direction == "northeast"){
        moverRect = {10, 650, 24, 24};
    }
    else if(direction == "northwest"){
        moverRect = {1100, 650, 24, 24};
    }
    else{
        moverRect = {650, 650, 24, 24};
    }
}