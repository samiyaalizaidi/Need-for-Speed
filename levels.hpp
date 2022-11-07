#include "attack.hpp"
#include "time.hpp"
#include <iostream>

class levels{
    public:
        static int coins;
        // bg renderer
        std::string attack;
        virtual void set_attack(){attack = "canon";}
};

class level_one : public levels{
    public:
        std::string x;
        void set_attack(){
            levels::set_attack();
        }
};

class level_two : public levels{
    public:
        std::string y;
        void set_attack(){
            levels::set_attack();
            y = "laser";
        }
};