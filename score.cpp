#include "score.hpp"

Score::Score()
{
   score = 0; 
}

int Score::getScore()
{
    return score;
}

void Score:: operator++(int i){
    score++;
}