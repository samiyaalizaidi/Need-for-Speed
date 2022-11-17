#include<SDL.h>
#pragma once

class Display{
    protected:

		//The SDL_Texture to be rendered
		SDL_Texture* mTex;

		//Used to render the texture
		Graphics* mGraphics;

		//Width of the texture
		int width;
		//Height of the texture
		int height;

		//True if the texture is loaded from a spritesheet
		bool check;

		//Is used to render the texture on the screen
		SDL_Rect moverRect;
		//Is used to clip the texture from a spritesheet
		SDL_Rect srcRect;

    public:
        Display(string path);
        Display(string path, SDL_Rect data);
        ~Display();
        virtual void Render();
};