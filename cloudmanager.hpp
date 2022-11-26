#include<vector>
#include <iostream>
using namespace std;
#include<list>
#include<SDL.h>
#include "clouds.hpp"

class cloudmanager{
    private:
        vector<clouds*>cld;
        vector<clouds1*>cld1;
    public:
        void drawobj();
        void drawobj1();
        void creatobj();
        void creatobj1();
        int check1=0;
        int check=0;
        ~cloudmanager();
};