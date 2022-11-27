#include "attack.hpp"

class Canon : public Attack{
    public:
        // constructor
        Canon(std::string);

        // runtime polymorphism
        void draw();
};