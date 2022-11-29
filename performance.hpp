#include<iostream>
#include "attackManager.hpp"
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

class Performance:{//public AttackManager{
    public:
        int health;
        int lives;

        void health_deter();
        int getlife();
        Performance();
        int getHealth(); // getter for health
        void CanonAttack(); // adjusts for health
        void laserAttack(); 
        bool alive = true ;
        void health_deter();
        void life_check();
};