#include<SDL.h>
#include<list>
#include <vector>
#include "drawing.hpp"

class clouds{
    SDL_Rect srcRect, moverRect;
    public:
    int count = 0 ;
    int frame = 0 ;
    void draw();
    void move();
    clouds();
    clouds(int, int);
    private:
        // gives address of the attack
        clouds* getObject();

    public:
        // list to store the attacks.
        list<clouds*> cld; 

        // draws and moves all objects
        void drawObjects(); 

        // obtains a dynamic memory
        void createObject();

        // destructorto release dynamic memory
        ~clouds();
};
