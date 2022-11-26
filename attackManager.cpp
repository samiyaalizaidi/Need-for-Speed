#include "attackManager.hpp"

void AttackManager::drawObjects(){
    // to display everything in the list
    for(Attack* attack: lst){        
        if(attack != NULL){
            attack->draw();
            attack->move_NorthEast();
        }
    }
}

Attack* AttackManager::getObject(){
    return new Canon(500, 55);
}

void AttackManager::createObject(){
    lst.push_back(new Canon(500, 55));
}

AttackManager::~AttackManager(){
    for(Attack* a: lst){
        if(a != NULL){
            delete a;
        }
    }
    lst.clear();
    cout << "everything deleted" << endl;
}

bool AttackManager::DetectCollision(SDL_Rect coord){
    for(Attack* attack : lst){
        if(attack->getX() == coord.x){
            if((attack->getY() >= coord.y) && (attack->getX() <= (coord.y + coord.h))){
                return true;
            }
        }
    }
    return false;
}