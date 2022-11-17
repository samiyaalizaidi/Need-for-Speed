#include <SDL.h>
#include "startScreen.hpp"
#pragma once
#include <SDL_ttf.h>

class ScreenManager{
    private:
        enum SCREENS {welcome, level1, level2};
        static ScreenManager* sInstance;
        // Input* nInput; // there is an input class

        StartScreen* start; // class for our start class
        SCREENS current;

    public:
        static ScreenManager* Instance();
        static void Release();
        void Update();
        void Render();
    private:
        ScreenManager();
        ~ScreenManager();

};