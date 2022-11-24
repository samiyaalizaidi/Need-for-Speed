#include "attack.hpp"

// spaceship::spaceship(){
//             coord.x = 0;
//             coord.y = 50;
//             srcRect = {12, 18, 71, 70};
//             moverRect = {600, 350,71, 70};
// }
void Attack::move_NorthEast(SDL_Rect coord){
    coord.x += 10;
    coord.y -= 10;
}

void Attack::move_NorthWest(SDL_Rect coord){
    coord.x -= 10;
    coord.y -= 10;
}

void Attack::move_SouthEast(SDL_Rect coord){
    coord.x += 10;
    coord.y += 10;
}

void Attack::move_SouthWest(SDL_Rect coord){
    coord.x -= 10;
    coord.y += 10;
}