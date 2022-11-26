#include <list>
#include <SDL.h>
#include <vector>
#include "canon.hpp"
#include "laser.hpp"
using namespace std;
#include <map>

class AttackManager{
    public:
        // map to store the bombs and the direction of their movement
        map<Attack*, string> bombs;

        // draws and moves all objects
        void drawObjects(); 

        // obtains a dynamic memory
        void createObject();

        // returns true if the attack has collided with the ship
        bool DetectCollision(SDL_Rect);

        // destructor to release dynamic memory
        ~AttackManager();
};