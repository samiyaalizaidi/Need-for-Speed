#include "score.hpp"

Score::Score()
{
   score = 0; 
}

void Score::increase()
{
    score++;
}

int Score::getScore()
{
    return score;
}