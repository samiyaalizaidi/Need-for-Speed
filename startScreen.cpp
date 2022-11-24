// #include "startScreen.hpp"

// StartScreen::StartScreen()
// {
//     //Top Bar Entities
//     //mTopBar = new GameEntity(Vector2(Graphics::Instance()->SCREEN_WIDTH*0.5f,80.0f));
//     mPlayerOne = new Texture("1UP","fontname.ttf",32,{200,0,0});
//     mHiScore = new Texture ("HI-Score","fontname.ttf",32,{200,0,0});
//     mPlayerOne = new Texture("2UP","fontname.ttf",32,{200,0,0});

//     // mPlayerOne->Parent(mTopBar);
//     // mHiScore->Parent(mTopBar);
//     // mPlayerTwo->Parent(mTopBar);

//     // mPlayerOne->Pos(Vector2(-Graphics::Instance()->SCREEN_WIDTH*O.35f,0.0f));
//     // mHiScore->Pos(Vector2(Graphics::Instance()->SCREEN_WIDTH*O.35f,0.0f));
//     // mPlayerTwo->Pos(Vector2(Graphics::Instance()->SCREEN_WIDTH*O.35f,0.0f));
    
//     // mTopBar->Parent(this);
//     mPlayButton = new GameEntity(Vector2(Graphics::Instance()->SCREEN_WIDTH*0.5f,Graphics::Instance()->SCREEN_HEIGHT*0.55f));
//     mPlayButton = new Texture("Play Game","Fontname.ttf", 32,{230,230,230});
//     mInstructions = new GameEntity(Vector2(Graphics::Instance()->SCREEN_WIDTH*0.5f,Graphics::Instance()->SCREEN_HEIGHT*0.55f));
//     mInstructions = new Texture("Instructions","Fontname.ttf", 32,{230,230,230});
    
//     mPlayButton->Pos(Vector2(-18.0f,-35.0f));
//     mInstructions->Pos(Vector2(0.0f,35.0f));




// }
// StartScreen::~StartScreen()
// {
//     //Freeing top bar Entities
//     // delete mTopBar;
//     // mTopBar = NULL;
//     delete mPlayerOne;
//     mPlayerOne = NULL;
//     delete mPlayerTwo;
//     mPlayerTwo = NULL;
//     delete mHiScore;
//     mHiScore = NULL;
    

// }
// void StartScreen::Update()
// {

// }
// void StartScreen::Render()
// {
//     mPlayerOne->Render();
//     mHiScore->Render();
//     mPlayerTwo->Render();
// }
