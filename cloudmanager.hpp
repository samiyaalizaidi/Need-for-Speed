using namespace std;
#pragma once
#include "clouds.hpp"
#include "clouds1.hpp"
#include "diamond.hpp"
class cloudmanager{
    private:
        vector<clouds*>cld;
        vector<clouds1*>cld1;
        vector<diamond*>dim;
    public:
        // for the first layer of clouds
        void drawobj();
        void drawobj1();

        // second layer of clouds
        void creatobj();
        void creatobj1();

        // for the diamonds
        void drawobj2();
        void creatobj2();

        // to check if the ship collided with the diamond
        bool DetectCollision(SDL_Rect);

        // to keep track of the number of diamonds
        int diamondsCollected = 0;

        int check1=0;
        int check=0;
        int check2=0;

        ~cloudmanager();
};