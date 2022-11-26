#include "canon.hpp"

void Canon::setAttack(){
    std::cout << "canon launched" << std::endl;
    srcRect = {0, 0, 24, 24};
    moverRect = {78, 23, 24, 24};
}

Canon::Canon(std::string direction){
    // for randomness
    int x = rand() % 3;
    // assigning positions depending on the direction of movement
    srcRect = {0, 0, 24, 24};
    if(direction == "northeast"){
        switch (x)
        {
        case 0:
            moverRect = {10, 650, 24, 24};
            break;
        
        case 1:
            moverRect = {40, 650, 24, 24};
            break;

        case 2:
            moverRect = {70, 650, 24, 24};
            break;

        default:
            break;
        }
    }
    else if(direction == "northwest"){
        switch (x)
        {
        case 0:
            moverRect = {1100, 650, 24, 24};
            break;
        
        case 1:
            moverRect = {1070, 650, 24, 24};
            break;

        case 2:
            moverRect = {1040, 650, 24, 24};
            break;

        default:
            break;
        }
    }
    else{
        switch (x)
        {
        case 0:
            moverRect = {650, 650, 24, 24};
            break;
        
        case 1:
            moverRect = {620, 650, 24, 24};
            break;

        case 2:
            moverRect = {590, 650, 24, 24};
            break;
            
        default:
            break;
        }
        
    }
}