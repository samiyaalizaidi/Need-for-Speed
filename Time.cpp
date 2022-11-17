#include "time.hpp"

Time* Time::Instance() {

		//Create a new instance of Timer if no instance was created before
		if(sInstance == nullptr)
			return new Time();
	}

void Time::Release() {

		delete sInstance;
		sInstance = nullptr;
	}

Time::Time() {

		//Using Reset to initialize all the values beside mTimeScale
		Reset();
		mTimeScale = 1.0f;
	}

Time::~Time() {

	}

void Time::Reset() {

		// mStartTicks = SDL_GetTicks();
		mElapsedTicks = 0;
		mDelataTime = 0.0f;
	}

void Time::Update() {

		// mElapsedTicks = SDL_GetTicks() - mStartTicks;
		//Converting milliseconds to seconds
		mDelataTime = mElapsedTicks * 0.001f;
	}