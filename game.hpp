// code from homework 4
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "drawing.hpp"
#include "display.hpp"
#include "spaceship.hpp"
#include "startScreen.hpp"
#include "attackManager.hpp"
#include "cloudmanager.hpp"
#pragma once
class Game{
    //Screen dimension constants
    const int SCREEN_WIDTH = 1200;
    const int SCREEN_HEIGHT = 700;

    //The window we'll be rendering to
    SDL_Window* gWindow = NULL;

    //Current displayed texture
    SDL_Texture* gTexture = NULL;
    
    // list to mantain all the attacks.
    list<Attack*> lst;
    
public:
    int state = 0;
    bool init();
    bool loadMenu();
    bool loadMedia();
    bool loadRules();
    void close();
    SDL_Texture* loadTexture( std::string path );
    void run();
    int x=0;
};

