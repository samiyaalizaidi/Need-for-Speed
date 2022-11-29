#include <list>
#include <SDL.h>
#include <vector>
#include "canon.hpp"
#include "laser.hpp"
#include "performance.hpp"
using namespace std;
#include <map>

class AttackManager{
    public:
        // map to store the attacks and the direction of their movement
        map<Attack*, string> attacks;

        // draws and moves all objects
        void drawObjects(); 

        // obtains a dynamic memory
        void createObject(int);
        // returns true if the attack has collided with the ship
        bool DetectCollision(SDL_Rect);
        // destructor to release dynamic memory
        ~AttackManager();
        //Performance ship_health;
        string a_type;
        //friend class Performance;
        Performance Health;
};