
/* 
this class is for the health and lives of our spaceship.
it only has two attributes:
    1. minutes
    2. seconds
Class functions:
    1. adjust()
        the adjust function will adjust the value of the seconds so that they don't exceed 59.
*/

class performance{
    int health;
    int lives;
    performance(int,int){
        health=100;
        lives=2;
    }
    void attack(//type_of_attack att){ //type_of_attack is a class with 2 types of attack
        //att is object of type of attack, will be given as argument
        while( lives >=1){
            if(health =0 && lives>1){
            if (att ="canon"){ //ASk {
                health = health - 20;
            }
            else{
                health = health  - 10;
            }
        }
            else if (health=0 && lives <=1 ){

               ///COnfusion, ask out about sequence of conditons,
               // health =0, lives =2 then lives-1
               //lives - 1 each time health = 0 until lives =0

        }
        }
    }
};