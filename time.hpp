/* 
this class is for the three-minute timer.
it only has two attributes:
    1. minutes
    2. seconds
Class functions:
    1. adjust()
        the adjust function will adjust the value of the seconds so that they don't exceed 59.
*/

class Time{

    private:
        static Time* sInstance;
        unsigned int mStartTicks;
        unsigned int mElapsedTicks;
        unsigned int mDelataTime;
        unsigned int mTimeScale;

        // old code:
    void adjust(){ // private function
        if(seconds > 59){
            minutes += seconds / 60;
            seconds %= 60;
        }
    }
    Time();
    ~Time();
    public:
    // old code:
        int minutes, seconds; // attributes
        // new code:
        static Time* Instance();
        static void Release();
        void Reset();
        // float DelataTime();
        // void TimeScale(float f);
        // float TimeScale();
        void Update();



};