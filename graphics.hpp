#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <iostream>
using namespace std;
#pragma once
// file with all the SDL stuff

class Graphics{
    public:

        const int SCREEN_WIDTH = 800;
        const int SCREEN_HEIGHT = 600;
        const char* WINDOW_TITLE = "Need for Speed";

    private:
        static Graphics* sInstance;
        static bool sInitialized;
        SDL_Window* window;
        SDL_Renderer* renderer; 
        SDL_Surface* mBackBuffer;

    public:
        static Graphics* Instance();
        static void Release();
        static bool Initialized();
        SDL_Texture* LoadTexture(string path);
        SDL_Texture* CreateTextTexture(TTF_Font* font, string text, SDL_Color color);
        void ClearBackBuffer();
        void DrawTexture(SDL_Texture* tex, SDL_Rect* clip = NULL, SDL_Rect* rend = NULL, float angle = 0.0f, SDL_RendererFlip flip = SDL_FLIP_NONE);
        void Render();

    private:
        Graphics();
        ~Graphics();
        bool Init();
};