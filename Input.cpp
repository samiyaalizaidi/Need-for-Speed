// #include "Input.hpp"

// Input* Input::sInstance = nullptr;

// Input* Input::Instance() {
//     //Create a new instance if no instance was created before
//     if(sInstance == NULL)
//         sInstance = new Input();

//     return sInstance;
// }

// void Input::Release() {
//     delete sInstance;
//     sInstance = NULL;
// }

// Input::Input() {
//     mKeyboardState = SDL_GetKeyboardState(&mKeyLength);
//     //Setting mPrevKeyboardState to be the same length as mKeyboardState
//     mPrevKeyboardState = new Uint8[mKeyLength];
//     //Copying the contents of mKeyboardState into mPrevKeyboardState so that it contains data on the first frame
//     memcpy(mPrevKeyboardState, mKeyboardState, mKeyLength);
// }

// Input::~Input() {
//     //Clearing the previous keyboard state array
//     delete[] mPrevKeyboardState;
//     mPrevKeyboardState = NULL;
// }

// bool Input::KeyDown(SDL_Scancode scanCode) {
//     return (mKeyboardState[scanCode] != 0);
// }

// bool Input::KeyPressed(SDL_Scancode scanCode) {
//     //returning true of the key was not pressed in the previous keyboard state but is pressed in the current one
//     return (mPrevKeyboardState[scanCode]) == 0 && (mKeyboardState[scanCode] != 0);
// }

// bool Input::KeyReleased(SDL_Scancode scanCode) {
//     //returning true of the key was pressed in the previous keyboard state but is not pressed in the current one
//     return (mPrevKeyboardState[scanCode] != 0) && (mKeyboardState[scanCode] == 0);
// }