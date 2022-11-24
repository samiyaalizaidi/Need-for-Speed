#include "attackManager.hpp"

void AttackManager::drawObjects(){
    // to display everything in the list
    for(Attack* attack: lst){        
        if(attack != NULL){
            attack->draw();
            attack->move_SouthEast();
        }
    }
}

Attack* AttackManager::getObject(){
    return new Canon(500, 55);
}

void AttackManager::createObject(){
    lst.push_back(getObject());
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