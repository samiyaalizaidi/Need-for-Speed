#include "performance.hpp"

Performance::Performance(){
    // constructor, we dont need inputs because initial values are fixed.
    health = 100;
    lives = 2;
}


int Performance::getlives(){
    return lives;
}

void Performance::BothAttack(){
    cout<< "attack on spaceship"<<endl;
    health -= 20; 
    cout<< "health left"<<health<<endl;    }

void Performance::life_check(){
    if (lives==2 && health==0) {
        health=100;
        lives=1;
        cout<< "lives left"<<lives<<endl; 
    }
    else if(lives==1 && health==0){
        lives=0;
        cout<< "lives finish"<<lives<<endl; 
      
    }  
}