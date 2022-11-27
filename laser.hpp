#include "attack.hpp"

class Laser : public Attack{
    public:
        // constructor
        Laser();

        // runtime polymorphism
        void draw();
};