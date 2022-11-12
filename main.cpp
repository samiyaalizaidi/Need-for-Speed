#include <SDL.h>
#include <SDL_image.h>
// #include <SDL_mixer.h>
#include <stdio.h>
// #include "performance.hpp"
// #include "levels.hpp"
#include <iostream>

//Screen dimension constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
// SDL Functions from hw1

// bool init()
// {
// 	//Initialization flag
// 	bool success = true;

// 	//Initialize SDL
// 	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
// 	{
// 		printf( "SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
// 		success = false;
// 	}
// 	else
// 	{
// 		//Set texture filtering to linear
// 		if( !SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY, "1" ) )
// 		{
// 			printf( "Warning: Linear texture filtering not enabled!" );
// 		}

// 		//Create window
// 		gWindow = SDL_CreateWindow( "Legend of Seeplusia!!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
// 		if( gWindow == NULL )
// 		{
// 			printf( "Window could not be created! SDL Error: %s\n", SDL_GetError() );
// 			success = false;
// 		}
// 		else
// 		{
// 			//Create renderer for window
// 			gRenderer = SDL_CreateRenderer( gWindow, -1, SDL_RENDERER_ACCELERATED );
// 			if( gRenderer == NULL )
// 			{
// 				printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
// 				success = false;
// 			}
// 			else
// 			{
// 				//Initialize renderer color
// 				SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );

// 				//Initialize PNG loading
// 				int imgFlags = IMG_INIT_PNG;
// 				if( !( IMG_Init( imgFlags ) & imgFlags ) )
// 				{
// 					printf( "SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError() );
// 					success = false;
// 				}
// 				// if( Mix_OpenAudio( 44100, MIX_DEFAULT_FORMAT, 2, 2048 ) < 0 )
// 				// {
// 				// 	printf( "SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError() );
// 				// 	success = false;
// 				// }
// 			}
// 		}
// 	}

// 	return success;
// }
// void close()
// {
// 	//Free loaded images
// 	SDL_DestroyTexture(assets);
// 	assets=NULL;
	
// 	//Destroy window
// 	SDL_DestroyRenderer( gRenderer );
// 	SDL_DestroyWindow( gWindow );
// 	gWindow = NULL;
// 	gRenderer = NULL;
// 	// Mix_FreeMusic(bgMusic);
// 	// bgMusic = NULL;
// 	//Quit SDL subsystems
// 	IMG_Quit();
// 	// Mix_Quit();
// 	SDL_Quit();
// }
// bool loadMedia()
// {
// 	//Loading success flag
// 	bool success = true;

// 	assets = loadTexture("assests.png");
//     if(assets==NULL)
//     {
//         printf("Unable to run due to error: %s\n",SDL_GetError());
//         success =false;
//     }
// 	// bgMusic = Mix_LoadMUS( "beat.wav" );

// 	// if(bgMusic == NULL){
// 	// 	printf("Unable to load music: %s \n", Mix_GetError());
// 	// 	success = false;
// 	// }
// 	return success;
// }

// levels level_change(int coins, performance p)
// {                                            // this gives us the level
//     levels *current_level = new level_one(); // run_time polymorphism
//     // object created of first level initially
//     string gamestate;
//     Time *current_time = new t1();  
    
//    // t1 time_level_1; // time for level 1
//    // t2 time_level_2; // time for level 2
//     while (p.getlife() >0 ) 
//     {
//         if (current_time->minutes == 3)
//         {
//             if (coins >= 10 )//&& p.getlife() >= 1
//             {
//                 current_level = new level_two(); // this will be forwarded
//                 gamestate = "Level 2 begins";
//                 current_time=new t2();
//             }
//             else if (coins < 10)// && p.getlife() >= 1)|| (coins >= 10 && p.getlife() == 0))
//             { // TRY PUTTING WHILE LOOP FOR LIFE
//                 // current_level stays same
//                 gamestate = "Game Lost";
//             }
//         }
//         if (current_time->minutes == 3) //current_state should be object of t2
//         {gamestate = "Game Won"; } //no coins condition for level 2
//     }
// }
/* string state(Time t, int coins, performance p){
    string gamestate;
    if((t.minutes == 3) && (coins >= 10) && (p.getlife() >= 1))
        gamestate = "promoted to level 2";
    else if((t.minutes == 3 && (coins < 10) && level==1) || ( p.getlife() == 0))
        gamestate = "Game lost";
    return gamestate;
} */

// int main()
// {
//     cout << "this is our project's main file" << endl;

//     return 0;
// }
int main()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Failed to initialize the SDL2 library\n";
        return -1;
    }

    SDL_Window *window = SDL_CreateWindow("SDL2 Window",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          680, 480,
                                          0);

    if(!window)
    {
        std::cout << "Failed to create window\n";
        return -1;
    }

    SDL_Surface *window_surface = SDL_GetWindowSurface(window);

    if(!window_surface)
    {
        std::cout << "Failed to get the surface from the window\n";
        return -1;
    }

    SDL_UpdateWindowSurface(window);

    SDL_Delay(5000);
}