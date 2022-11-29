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
//#include "attackManager.hpp"
#include "cloudmanager.hpp"
//#include "performance.hpp"
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
    // for selecting the page that needs to be diplayed
    int state = 0;

    // initializes the renderer
    bool init();

    // loads the start page
    bool loadMenu();

    // loads the level one of the game
    bool loadMedia();

    // loads the rules page of the game 
    bool loadRules();

    // loads the level two of the game
    bool loadLevelTwo();

    // closes everything; sets the pointers to nullptr
    void close();

    // loads all the textures; sets the path
    SDL_Texture* loadTexture( std::string path );

    // main work happens here
    void run();
    int x=0;
    Performance Health;
};

