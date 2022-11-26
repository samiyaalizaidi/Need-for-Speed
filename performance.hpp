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

class Performance{
    private:
        int health;
        int lives;
    public:
        int getlife();
        Performance();
        void health_deter(string); // determines the health
        int getHealth(); // getter for health
        void CanonAttack(); // adjusts for health

        bool alive = true ;
        
};