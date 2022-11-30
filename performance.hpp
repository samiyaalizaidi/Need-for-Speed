#include<iostream>
//#include "attackManager.hpp"
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

class Performance{
    public:
        int health;
        int lives;
        Performance();
        // getter for health
        int getlives(); 
        //it decreases the health by 20, when ship is attacked
        void BothAttack(); 
        bool alive = true ;
        //keeps check on lives left
        void life_check();
};