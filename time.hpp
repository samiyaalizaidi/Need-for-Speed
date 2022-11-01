
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
    void adjust(){ // private function
        if(seconds > 59){
            minutes += seconds / 60;
            seconds %= 60;
        }
    }
    public:
        int minutes, seconds; // attributes
};