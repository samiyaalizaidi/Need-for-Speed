#include"ScreenManager.hpp"

ScreenManager* ScreenManager::sInstance = NULL;

ScreenManager* ScreenManager::Instance(){
    if(sInstance == NULL){
        return new ScreenManager();
    }
} 

void ScreenManager::Release(){
    delete sInstance;
    sInstance = nullptr;
}

ScreenManager::ScreenManager(){
    // mStartscreen = new start()
    // current = start;
    // mInput = inputmanager::instance;
}

ScreenManager::~ScreenManager(){
    // mInput = NULL;
    // delete everythonh

}

void ScreenManager::Update(){
    // their own update comes here
}

void ScreenManager::Render(){
    // their own render
    // 10:45 of the video
}