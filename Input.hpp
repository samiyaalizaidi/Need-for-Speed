#pragma once
#include <SDL.h>

class Input{
    static Input* sInstance;

    public:
    static Input* Instance();
    static void Release();
    bool KeyDown(SDL_Scancode scanCode);
    bool KeyPressed(SDL_Scancode scanCode);
    bool KeyReleased(SDL_Scancode scanCode);
    void Update();

    private:
        Input();
        ~Input();

};