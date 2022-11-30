// #include <QGraphicsTextItem>

class Score
{
    public:
        // overloaded postfix ++ operator
        void operator ++ (int);

        // returns the score
        int getScore();

        // initializes the score
        Score();
        //~Score();

    private:
        int score;
};