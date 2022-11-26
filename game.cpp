/* 
This file contains all the function definitions for our SDL Class.
*/

#include "game.hpp"

SDL_Renderer *Drawing::gRenderer = NULL;
SDL_Texture *Drawing::assets = NULL;
SDL_Texture *Drawing::attack = NULL;
SDL_Texture *Drawing::clouds = NULL;
<<<<<<< Updated upstream

=======
SDL_Texture *Drawing::diamond = NULL;
>>>>>>> Stashed changes
bool Game::init()
{
	// Initialization flag
	bool success = true;

	// Initialize SDL
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{
		// Set texture filtering to linear
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
		{
			printf("Warning: Linear texture filtering not enabled!");
		}

		// Create window
		gWindow = SDL_CreateWindow("NEED FOR SPEED", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL)
		{
			printf("Window could not be created! SDL Error: %s\n", SDL_GetError());
			success = false;
		}
		else
		{
			// Create renderer for window
			Drawing::gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED);
			if (Drawing::gRenderer == NULL)
			{
				printf("Renderer could not be created! SDL Error: %s\n", SDL_GetError());
				success = false;
			}
			else
			{
				// Initialize renderer color
				SDL_SetRenderDrawColor(Drawing::gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

				// Initialize PNG loading
				int imgFlags = IMG_INIT_PNG;
				if (!(IMG_Init(imgFlags) & imgFlags))
				{
					printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
					success = false;
				}
			}
		}
	}
	return success;
}

bool Game::loadMenu()
{
	// Loading success flag
	bool success = true;
	gTexture = loadTexture("assets/menu.png");
	if (gTexture == NULL)
	{
		printf("Unable to run due to error: %s\n", SDL_GetError());
		success = false;
	}
	return success;
}

bool Game::loadRules()
{
	// Loading success flag
	bool success = true;
	gTexture = loadTexture("assets/rules.png");
	if (gTexture == NULL)
	{
		printf("Unable to run due to error: %s\n", SDL_GetError());
		success = false;
	}
	return success;
}

bool Game::loadMedia()
{
	// Loading success flag
	bool success = true;

	Drawing::assets = loadTexture("assets/shipsprite.png"); // for the ship to move
	Drawing::attack = loadTexture("assets/Gameassets/UI bomb.png"); // for the canon
<<<<<<< Updated upstream
	Drawing::clouds = loadTexture("assets/clouds.png"); // for the clouds

=======
	Drawing::clouds = loadTexture("assets/clouds.png"); 
	Drawing::diamond= loadTexture("assets/diamond.png"); 
>>>>>>> Stashed changes
	gTexture = loadTexture("assets/Background.png"); // for the background image
	
	if (Drawing::assets == NULL|| gTexture == NULL)
	{
		printf("Unable to run due to error: %s\n", SDL_GetError());
		success = false;
	}
	return success;
}

void Game::close()
{
	// Free loaded images
	SDL_DestroyTexture(Drawing::assets);
	SDL_DestroyTexture(Drawing::attack);
	SDL_DestroyTexture(Drawing::clouds);
<<<<<<< Updated upstream

	Drawing::assets = NULL;
	Drawing::attack = NULL;
	Drawing::clouds = NULL;
	
=======
	SDL_DestroyTexture(Drawing::diamond);
	Drawing::diamond = NULL;
	Drawing::assets = NULL;
	Drawing::attack = NULL;
	Drawing::clouds = NULL;
>>>>>>> Stashed changes
	SDL_DestroyTexture(gTexture);

	// Destroy window
	SDL_DestroyRenderer(Drawing::gRenderer);
	SDL_DestroyWindow(gWindow);
	gWindow = NULL;
	Drawing::gRenderer = NULL;
	// Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}

SDL_Texture *Game::loadTexture(std::string path)
{
	// The final texture
	SDL_Texture *newTexture = NULL;

	// Load image at specified path
	SDL_Surface *loadedSurface = IMG_Load(path.c_str());
	if (loadedSurface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
	}
	else
	{
		// Create texture from surface pixels
		newTexture = SDL_CreateTextureFromSurface(Drawing::gRenderer, loadedSurface);
		if (newTexture == NULL)
		{
			printf("Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		// Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}
	return newTexture;
}

void Game::run()
{
	bool quit = false;
	SDL_Event e;

	spaceship ship; // we will have our spaceship here	
	AttackManager attack; // to display the canon for testing
	string direction = "reset"; // to call the mover functions
	bool checkAttack = false;
	cloudmanager c2;
	cloudmanager c3;
<<<<<<< Updated upstream
	
=======
	cloudmanager d;
>>>>>>> Stashed changes
	while (!quit)
	{		
		// Handle events on queue
		while (SDL_PollEvent(&e) != 0)
		{
			// User requests quit
			if (e.type == SDL_QUIT)
			{
				quit = true;
				cout << quit;
			}
	
			// mouse button pressed
			else if (e.type == SDL_MOUSEBUTTONDOWN)
			{
				int xMouse, yMouse;
				SDL_GetMouseState(&xMouse, &yMouse);
				cout << xMouse << endl;
				cout << yMouse << endl;
				// cout<<state;
				if (state == 0 and xMouse >= 487 and xMouse <= 710 and yMouse >= 456 and yMouse <= 548)
				{
					state = 2; // state2 represents the game has started (play is pressed)
					loadMedia();
					
				}
				else if (state == 0 and xMouse >= 485 and xMouse <= 713 and yMouse >= 573 and yMouse <= 654)
				{
					state = 1; // state 1 is the rules page
					loadRules();
				}
				else if (state == 1 and xMouse >= 42 and xMouse <= 197 and yMouse >= 583 and yMouse <= 641)
				{
					state = 0;
					loadMenu();
				}
			}

			// a key is pressed
			else if(e.type == SDL_KEYDOWN){
				switch( e.key.keysym.sym ){
                    case SDLK_UP:
                        direction = "up";
                        break;
                    case SDLK_DOWN:
                        direction = "down";
                        break;
                    default:
                        break;
                }
			}
			
			else{
				//ship.adjust(); // if the button is not pressed the ship will be straight
			}
<<<<<<< Updated upstream
		}
=======
		
			// to create bombs with 5% probability

			int x = rand() % 10;
			switch (x)
			{
				case 1:
					attack.createObject();
					break;
				
				default:
					break;
			}
			
			SDL_RenderClear(Drawing::gRenderer); // removes everything from renderer
			SDL_RenderCopy(Drawing::gRenderer, gTexture, NULL, NULL); // Draws background to renderer
			
			//***********************draw the objects here********************
			
			attack.drawObjects(); // display the bombs

			ship.draw(); // display the ship
>>>>>>> Stashed changes

		// to create bombs with 5% probability
		int x = rand() % 20;
		switch (x)
		{
			case 1:
				attack.createObject();
				break;
			
			default:
				break;
		}
		
		SDL_RenderClear(Drawing::gRenderer); // removes everything from renderer
		SDL_RenderCopy(Drawing::gRenderer, gTexture, NULL, NULL); // Draws background to renderer
		
		//***********************draw the objects here********************
		
		attack.drawObjects(); // display the bombs

		ship.draw(); // display the ship

<<<<<<< Updated upstream
		if(attack.DetectCollision(ship.getRect())){
			checkAttack = true;
			ship.showAttack();
			cout << "collision detected" << endl;
		}
=======
			//****************************************************************
			if(state==2){
				c2.creatobj();
				c3.creatobj1();
				c2.drawobj();
				c3.drawobj1();
				d.creatobj2();
				d.drawobj2();
			}
			SDL_RenderPresent(Drawing::gRenderer); // displays the updated renderer
>>>>>>> Stashed changes

		if (direction == "up" and  state == 2)
		{
			ship.moveup();
			direction = "reset";
		}
		else if (direction == "down" and state == 2)
		{
			ship.move_down();
			direction = "reset";
		}
		//****************************************************************
		if(state == 2){
			c2.creatobj();
			c3.creatobj1();
			c2.drawobj();
			c3.drawobj1();
		}
		SDL_RenderPresent(Drawing::gRenderer); // displays the updated renderer

		SDL_Delay(50); // causes sdl engine to delay for specified miliseconds		
	}
}