#pragma once

#include <SDL.h>

class gameManager{
    private:
        static gameManager* sInstance;
        const int f_rate = 120; // frame rate
        bool quit; // for the loop

        // all the managers in one place
        // we have to make these
        // Graphics* mGraphics;
		// AssetManager* mAssetMgr;
		// InputManager* mInputMgr;
		// AudioManager* mAudioMgr;

        // Timer* timer; // timer class

        SDL_Event e;

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