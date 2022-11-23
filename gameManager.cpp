#include "gameManager.hpp"

gameManager* gameManager::sInstance = NULL;

gameManager* gameManager::Instance()
{
    if (sInstance == NULL)
        sInstance = new gameManager();
    return sInstance;
}

void gameManager::Release()
{
    delete sInstance;
    sInstance = NULL;
}

gameManager::gameManager()
{
    quit = false;
    mGraphics = Graphics::Instance();

    if (!Graphics::Initialized())
        quit = true;
    
    mtimer = Time::Instance(); 
}

gameManager::~gameManager()
{
    Graphics::Release();
    mGraphics = NULL;
    Time::Release();
    mtimer = NULL;
}

void gameManager::Run()
{
    while(!quit)
    {
        mtimer->Update();
        while(SDL_PollEvent(&event) != 0)
        {
            if (event.type == SDL_QUIT)
            {
                quit = true;
            }
        }
        if (mtimer->DelataTime() >= (0.1f /f_rate))
        {
            printf("DeltaTime: %F\n", mtimer->DelataTime());
            mGraphics->Render();
            mtimer->Reset();
        }        
    }
}