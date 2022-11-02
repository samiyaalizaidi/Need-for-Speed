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
    int health;
    int lives;
    performance(){
        // constructor, we dont need inputs because initial values are fixed.
        health = 100;
        lives = 2;
    }
    void attack(string att){ 
        //type_of_attack is a class with 2 types of attack
        //att is object of type of attack, will be given as argument
        while(lives >= 1){
            if(health == 0 && lives > 1){
                if (att == "canon"){ 
                    //ASk-> sidra wanted to confirm smth? 
                    health = health - 20;
                }
                else{
                    health = health  - 10;
                }
            }
            else if (health == 0 && lives <= 1 ){

               ///COnfusion, ask out about sequence of conditons,
               // health =0, lives =2 then lives-1
               //lives - 1 each time health = 0 until lives =0

            }
        }
    }
};