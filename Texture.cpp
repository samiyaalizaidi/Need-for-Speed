#include "Texture.hpp"

Texture::Texture(std::string filename) {

		// graphics = Graphics::Instance();

		//Loads the texture from the AssetManager to avoid loading textures more than once
		mTex = Assets::Instance()->GetTexture(filename);

		//Gets the Width and Height of the texture
		SDL_QueryTexture(mTex, NULL, NULL, &width, &height);

		//Clipped is false since the image is not loaded from a spritesheet
		clipped = false;

		mRect.w = width;
		mRect.h = height;
	}