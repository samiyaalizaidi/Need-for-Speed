// #pragma once
// #include <SDL.h>

// class Input{
//     static Input* sInstance;
//     // understand the working of this 
//     Uint8* mPrevKeyboardState;
//     //Holds the keyboard key state of the current frame
//     const Uint8* mKeyboardState;
//     //The number of keys in the mKeyboardState array (used to copy the current keyboard state into the previous keyboard state)
//     int mKeyLength;
		
//     public:
//     static Input* Instance();
//     static void Release();
//     bool KeyDown(SDL_Scancode scanCode);
//     bool KeyPressed(SDL_Scancode scanCode);
//     bool KeyReleased(SDL_Scancode scanCode);
//     // void Update();

//     private:
//         Input();
//         ~Input();

// };