/* 
This file contains all the function definitions for our SDL Class.
*/

#include "game.hpp"

SDL_Renderer *Drawing::gRenderer = NULL;
SDL_Texture *Drawing::assets = NULL;
SDL_Texture *Drawing::attack = NULL;
SDL_Texture *Drawing::clouds = NULL;
SDL_Texture *Drawing::diamond = NULL;
SDL_Texture *Drawing::laser = NULL;

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
	Drawing::clouds = loadTexture("assets/clouds.png"); // for the clouds
	Drawing::diamond = loadTexture("assets/diamond.png"); // for the diamonds
	// Drawing::laser = loadTexture("assets/beams.png"); // for the laser -> we dont need laser here

	gTexture = loadTexture("assets/Background.png"); // for the background image
	
	if (Drawing::assets == NULL|| gTexture == NULL)
	{
		printf("Unable to run due to error: %s\n", SDL_GetError());
		success = false;
	}
	return success;
}

bool Game::loadLevelTwo()
{
		// Loading success flag
	bool success = true;
	

	Drawing::assets = loadTexture("assets/shipsprite.png"); // for the ship to move
	Drawing::attack = loadTexture("assets/Gameassets/UI bomb.png"); // for the canon
	Drawing::clouds = loadTexture("assets/clouds.png"); // for the clouds
	Drawing::diamond = loadTexture("assets/diamond.png"); // for the diamonds
	Drawing::laser = loadTexture("assets/beams.png"); // for the laser */

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
	SDL_DestroyTexture(Drawing::diamond);
	SDL_DestroyTexture(Drawing::laser);

	Drawing::diamond = NULL;
	Drawing::assets = NULL;
	Drawing::attack = NULL;
	Drawing::clouds = NULL;
	Drawing::laser = NULL;
	
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
	cloudmanager d;
	bool moveLevel;
	bool collisionCheck;
	int count = 0;

	while (!quit)
	{		
		// Handle events on queue
		while (SDL_PollEvent(&e) != 0)
		{
			// User requests quit
			if (e.type == SDL_QUIT)
			{
				quit = true;
				cout << quit << endl;
			}
	
			// mouse button pressed
			else if (e.type == SDL_MOUSEBUTTONDOWN)
			{
				int xMouse, yMouse;
				SDL_GetMouseState(&xMouse, &yMouse);
				
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
			  	else if (state == 5 && moveLevel){
					//gTexture = loadTexture("assets/level2.png");
					int xMouse,yMouse;
					cout << xMouse << endl;
					cout << yMouse << endl;
				 	SDL_GetMouseState(&xMouse, &yMouse);
					if (xMouse>=486 and xMouse<=597 and yMouse>=540 and yMouse<=589)
					{
						state=3;
						loadLevelTwo();
						//state = 2;
						
					} 
				}
			}

			// a key is pressed
			else if(e.type == SDL_KEYDOWN){
				switch( e.key.keysym.sym ){

                    case SDLK_UP:
                        direction = "up";
						ship.moveup();
                        break;

                    case SDLK_DOWN:
                        direction = "down";
						ship.move_down();
                        break;

                    default:
                        break;
                }
			}
			
			else{
				ship.adjust(); // if the button is not pressed the ship will be straight
			}

		}
	
	
		SDL_RenderClear(Drawing::gRenderer); // removes everything from renderer
		SDL_RenderCopy(Drawing::gRenderer, gTexture, NULL, NULL); // Draws background to renderer

		// to create attacks with 5% probability
		int y = rand() % 20;
		switch (y)
		{
			case 1:
				attack.createObject(state); 
				break;
			
			default:
				break;
		}
		
		// display the ship

		// ship's collision with attacks
		if(attack.DetectCollision(ship.getRect())){
			checkAttack = true;
			ship.showAttack();
			cout << "collision detected" << endl;
			     //whatever is the type of attack, health decrement is 10;
            Health.CanonAttack();
			if(Health.health==0){
				Health.life_check();
				if(Health.lives==0){
					Health.alive==false;
					//end game
					gTexture = loadTexture("assets/game_over.png");
					state=4;//end game
				}
    }
		}

		// ship's collision with diamonds
		if(d.DetectCollision(ship.getRect())){
			cout << "found diamond" << endl; count++;

			// move to level two if the player has collected 10 diamonds
			if(state == 2 && d.diamondsCollected == 1){
				moveLevel = true; state = 5; //state5 is just a temp state of level2
				gTexture = loadTexture("assets/level2.png");
				

			}
		}

		if(state==2 || state==3 ){
			attack.drawObjects(); // display the bombs
			d.creatobj2();
			d.drawobj2();
			ship.draw(); 
			c2.creatobj();
			c3.creatobj1();
			c2.drawobj();
			c3.drawobj1();
			
		}
		
		SDL_RenderPresent(Drawing::gRenderer); // displays the updated renderer

		SDL_Delay(50); // causes sdl engine to delay for specified miliseconds		
	}
}
