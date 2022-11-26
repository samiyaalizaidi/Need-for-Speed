#include <list>
#include <SDL.h>
#include <vector>
#include "canon.hpp"
#include "laser.hpp"
using namespace std;

class AttackManager{
    private:
        // gives address of the attack
        Attack* getObject();

    public:
        // list to store the attacks.
        list<Attack*> lst; 

        // draws and moves all objects
        void drawObjects(); 

        // obtains a dynamic memory
        void createObject();

        // returns true if the attack has collided with the ship
        bool DetectCollision(SDL_Rect);

        // destructorto release dynamic memory
        ~AttackManager();
};