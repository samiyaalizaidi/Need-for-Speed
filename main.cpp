#include "performance.hpp"
#include "time.hpp"
#include "levels.hpp"
levels level_change(int coins, performance p)
{                                            // this gives us the level
    levels *current_level = new level_one(); // run_time polymorphism
    // object created of first level initially
    string gamestate;
    Time *current_time = new t1();  
    
   // t1 time_level_1; // time for level 1
   // t2 time_level_2; // time for level 2
    while (p.getlife() >0 ) 
    {
        if (current_time->minutes == 3)
        {
            if (coins >= 10 )//&& p.getlife() >= 1
            {
                current_level = new level_two(); // this will be forwarded
                gamestate = "Level 2 begins";
                current_time=new t2();
            }
            else if (coins < 10)// && p.getlife() >= 1)|| (coins >= 10 && p.getlife() == 0))
            { // TRY PUTTING WHILE LOOP FOR LIFE
                // current_level stays same
                gamestate = "Game Lost";
            }
        }
        if (current_time->minutes == 3) //current_state should be object of t2
        {gamestate = "Game Won"; } //no coins condition for level 2
    }
}
/* string state(Time t, int coins, performance p){
    string gamestate;
    if((t.minutes == 3) && (coins >= 10) && (p.getlife() >= 1))
        gamestate = "promoted to level 2";
    else if((t.minutes == 3 && (coins < 10) && level==1) || ( p.getlife() == 0))
        gamestate = "Game lost";
    return gamestate;
} */

int main()
{
    cout << "this is our project's main file" << endl;
    return 0;
}
