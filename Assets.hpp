#include <map>
#include <SDL.h>
using namespace std;
#include <SDL_ttf.h>
#pragma once
class Assets{
    static Assets* sInstance;
    map<string, SDL_Texture*> textures;
    map<string, SDL_Texture*> texts;
    map<string, TTF_Font*> fonts;
    // map<string, Mix_Music*> textures;
    // map<string, SDL_Texture*> textures;
    
    Assets();
    ~Assets();
    TTF_Font* GetFont(string path, int size);
    public:
        static Assets* Instance();
        static void Release();
        SDL_Texture* GetTexture(string path);
        SDL_Texture* GetText(string path);
        SDL_Texture* GetText(string text, string filename, int size, SDL_Color color);
        void Release();



};