#include "performance.hpp"
#include "time.hpp"
string state(Time t, int coins, performance p){
    string gamestate;
    if((t.minutes == 3) && (coins >= 10) && (p.getlife() >= 1))
        gamestate = "promoted to level 2";
    else if((t.minutes == 3 && (coins < 10) && level==1) || ( p.getlife() == 0))
        gamestate = "Game lost";
    return gamestate;
}


int main(){
    cout << "this is our project's main file" << endl;
    return 0;
}
