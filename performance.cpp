#include "performance.hpp"

Performance::Performance(){
    // constructor, we dont need inputs because initial values are fixed.
    health = 100;
    lives = 2;
}
/* void Performance::health_deter(){
    if (lives == 2){
        if (health>0){
            if (a_type == "canon"){
                health -=20;
            }
            else{//laser
                health -=10;
            }
        }
        else if(health=0){
            lives -- ;
            if (health>0){
                if (a_type == "canon"){
                    health -=20;
                }
                else{ //laser
                    health -=10;
                }
            }     
        }
    }
    else if(lives ==1){
        if (health>0){
            if (a_type == "canon"){
                health -=20;
            }
            else{ //laser attack
                health -=10;
            }
        }
        else if(health = 0){
            lives--;
            alive = false;
        }
    }
} */

int Performance::getHealth(){
    return health;
}

void Performance::CanonAttack(){
    cout<< "attack by canon";
    health -= 20; 
    cout<< "health left"<<health<<endl;    }
void Performance::laserAttack(){
    cout<<"attack by laser";
    health -= 10; 
    cout<< "health left"<<health<<endl;      }
void Performance::life_check(){
    if (lives==2 && health==0) {
        health=100;
        lives=1;
        cout<< "lives left"<<lives<<endl; 
    }
    else if(lives==1 && health==0){
        lives=0;
        cout<< "lives finish"<<lives<<endl; 
        
    }}