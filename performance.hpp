#include<iostream>
using namespace std;

/* 
this class is for the health and lives of our spaceship.
it only has two attributes, both are private because user should not change them on their own:
    1. health
    2. lives
Class functions:
    1. attack()
        the attack function will adjust the values of the lives and health
        after an attack - either laser or canon.
*/

class performance{
    private:
        int health;
        int lives;
    public:

        performance(){
            // constructor, we dont need inputs because initial values are fixed.
            health = 100;
            lives = 2;
        }
        //void attack(string att){ 
            //type_of_attack is a class with 2 types of attack
            //att is object of type of attack, will be given as argument
        bool alive = true ;
        void health_deter(string attack){

            if (lives == 2){
                if (health>0){
                    if (attack == "canon"){
                        health -=20;
                    }
                    else{//laser
                        health -=10;
                    }
                }
                else if(health=0){
                    lives -- ;
                    if (health>0){
                        if (attack == "canon"){
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
                    if (attack == "canon"){
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
}
};