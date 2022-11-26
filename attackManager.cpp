#include "attackManager.hpp"

void AttackManager::drawObjects(){
    // draw all the bombs
    for(auto attack : bombs){
        if(attack.first != NULL){
            attack.first->draw();

            // move according to the bomb's origin

            if(attack.second == "northeast"){
                attack.first->move_NorthEast();
            }
            else if(attack.second == "northwest"){
                attack.first->move_NorthWest();
            }
            else{
                attack.first->move_up();
            }
        }
    }
}

void AttackManager::createObject(){
    // generate bombs at random positions
    int s = rand() % 3;

    switch (s)
    {
    case 0: // coming from left side of the screen
        bombs.insert(pair<Attack*, string>(new Canon("northeast"), "northeast"));
        break;
    
    case 1: // coming from the right side of the screen 
        bombs.insert(pair<Attack*, string>(new Canon("northwest"), "northwest"));
        break;

    case 2: // coming from the middle of the screen
        bombs.insert(pair<Attack*, string>(new Canon("up"), "up"));   
        break;

    default:
        break;
    }
}

AttackManager::~AttackManager(){
    // release memory allocated to all the keys.
    for(auto attack : bombs){
        if(attack.first != NULL){
            delete attack.first;
            // bombs.erase(attack.first);
        }
    }
    bombs.clear(); // clear the map
    cout << "everything deleted" << endl;
}

// bool AttackManager::DetectCollision(SDL_Rect coord){
//     for(Attack* attack : lst){
//         if(attack->getX() == coord.x){
//             if((attack->getY() >= coord.y) && (attack->getX() <= (coord.y + coord.h))){
//                 return true;
//             }
//         }
//     }
//     return false;
// }