#include<vector>
#include<list>
#include<SDL.h>
#include "clouds.hpp"
#include <iostream>
using namespace std;

class cloudmanager{
    private:
        vector<clouds*>cld;
    public:
        void drawobj();
        void creatobj();
        int check=0;
        ~cloudmanager();
};