// #include "InputManager.hpp"
// #include "AnimatedTexture.hpp"
#include "Texture.hpp"
#pragma once
// using namespace QuickSDL;

class StartScreen
{
    //Top Bar Entities
    //GameEntity*  mTopBar;
    Texture* mPlayerOne;
    Texture* mHiScore;
    Texture* mPlayerTwo;

    //adding play button and instructions page
    // GameEntity* mPlayButton;
    // GameEntity* mInstructions;
    // Texture* mPlayButton;
    // Texture* mInstructions;

    public:
    StartScreen();
    ~StartScreen();

    void Update();
    void Render();
};