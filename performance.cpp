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
    health -= 20;      }
void Performance::laserAttack(){
    health -= 10;      }
void Performance::life_check(){
    if (lives==2) {
        health==100;
        lives--;
    }
    else if(lives==1){
        lives--;
        
    }}