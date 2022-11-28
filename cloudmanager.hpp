#include<vector>
#include <iostream>
using namespace std;
#include<list>
#include<SDL.h>
#include "clouds.hpp"
#include "clouds1.hpp"
#include "diamond.hpp"
class cloudmanager{
    private:
        vector<clouds*>cld;
        vector<clouds1*>cld1;
        vector<diamond*>dim;
    public:
        void drawobj();
        void drawobj1();
        void creatobj();
        void creatobj1();
        void drawobj2();
        void creatobj2();
        bool DetectCollision(SDL_Rect);
        int check1=0;
        int check=0;
        int check2=0;

        ~cloudmanager();
};