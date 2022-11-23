#pragma once

#include <SDL.h>
#include "time.hpp"
#include "startScreen.hpp"
#include "graphics.hpp"


class gameManager{
    private:
        static gameManager* sInstance;
        const int f_rate = 120; // frame rate
        bool quit; // for the loop

        // all the managers in one place
        // we have to make these
        Graphics* mGraphics;
		// AssetManager* mAssetMgr;
		// InputManager* mInputMgr;
		// AudioManager* mAudioMgr;

        Time* mtimer; // timer class

        SDL_Event event;
        StartScreen* mStartScreen;

    public:
        static gameManager* Instance();
        static void Release(); // release memory
        void Run();


    private:
        gameManager();
        ~gameManager();
        void EarlyUpdate();
        void Update();
        void LateUpdate();
        void Render();
};