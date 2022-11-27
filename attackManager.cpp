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
            else if(attack.second == "laser"){
                attack.first->move_right();
            }
            else{
                attack.first->move_up();
            }
        }
    }
}

void AttackManager::createObject(){
    // generate bombs at random positions
    int att = rand() % 2;
    if(att == 0){
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
    
    else{
        bombs.insert(pair<Attack*, string>(new Laser(), "laser"));  
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

bool AttackManager::DetectCollision(SDL_Rect coord){
    int h = coord.h; 
    int w = coord.w;
    int x = coord.x;
    int y = coord.y;
    // int 
    for(auto attack : bombs){
        if(x == attack.first->getX()){
            if(y >= attack.first->getY() && y <= (attack.first->getY() + 70)){
                return true;
            }
        }
        else if(y == attack.first->getY()){
            if(x >= attack.first->getX() && x <= (attack.first->getX() + 71)){
                return true;
            }
        }
    }
    return false;
}