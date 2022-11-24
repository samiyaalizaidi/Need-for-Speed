// #include "Assets.hpp"

// Assets* Assets::sInstance = nullptr;

// Assets* Assets::Instance(){
//     if(sInstance == NULL)
// 			sInstance = new Assets();

// 		return sInstance;
// }

// void Assets::Release() {

// 		delete sInstance;
// 		sInstance = NULL;
// }

// Assets::~Assets(){

// 		//Freeing all loaded Textures
// 		for(auto tex : textures) {
// 			if(tex.second != NULL) {
// 				SDL_DestroyTexture(tex.second);
// 			}
//         }
// 		textures.clear();

// 		//Freeing all rendered text
// 		for(auto text : texts) {
// 			if(text.second != NULL) {
// 				SDL_DestroyTexture(text.second);
// 			}
// 		}

// 		fonts.clear();

// 		//Freeing all loaded fonts
// 		for(auto font : fonts) {
// 			if(font.second != NULL) {
// 				TTF_CloseFont(font.second);
// 			}
// 		}

// 		fonts.clear();	
// }

// SDL_Texture* Assets::GetTexture(string path) {
// 		//Get the full path of the file
// 		std::string fullPath = SDL_GetBasePath();
// 		fullPath.append("assets/" + path);

// 		//If the file has not been already loaded, load it and add it to the mTextures map
// 		// if(textures[fullPath] == nullptr)
// 		// 	textures[fullPath] = Graphics::Instance()->LoadTexture(fullPath);

// 		//returning the cached file from the map
// 		return textures[fullPath];
// }

// TTF_Font* Assets::GetFont(string path, int size) {

// 		//Get the full path of the font
// 		string fullPath = SDL_GetBasePath();
// 		fullPath.append("assets/" + path);

// 		//The key takes into account the size of the font aswell since the same font can be opened with different sizes
// 		std::string key = fullPath + (char)size;

// 		//If the font has not been already loaded, load it and add it to the mFonts map
// 		if(fonts[key] == nullptr) {

// 			fonts[key] = TTF_OpenFont(fullPath.c_str(), size);
// 			//Error handling for opening the font
// 			if(fonts[key] == nullptr)
// 				printf("Font Loading Error: Font-%s Error-%s", path.c_str(), TTF_GetError());
// 		}

// 		//returning the cached font from the map
// 		return fonts[key];
// }

// SDL_Texture* Assets::GetText(string text, string path, int size, SDL_Color color) {

// 		//Get the font from the font cache
// 		TTF_Font* font = GetFont(path, size);

// 		//The key takes into account the font, text, size, and color to differentiate text textures
// 		std::string key = text + path + (char)size + (char)color.r + (char)color.b + (char)color.g;

// 		//If the same text has not been rendered before, render it and add it to the mText map
// 		// if(texts[key] == nullptr)
// 		// 	texts[key] = Graphics::Instance()->CreateTextTexture(font, text, color);

// 		//returning the cached texture containing the text
// 		return texts[key];
// 	}