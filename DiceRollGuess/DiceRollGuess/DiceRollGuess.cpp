//6th console Project
//Title: Dice Roll Guess

#include <iostream>
#include <random>

int main()
{
    int gameExit = 0; //Exit key
    int guessRollNum = -1; //To initialize the game
    
    //Game loop
    while (guessRollNum != gameExit) {
        //Handles Random number from 1 to 6
        std::default_random_engine generate;
        std::uniform_int_distribution<int> distribute(1, 6);
        int diceRollNum = distribute(generate);
        
        std::cout << "Guess Dice Roll: ";
        std::cin >> guessRollNum;

        if (guessRollNum != diceRollNum)
        {
            std::cout << "Try Again" << std::endl;
        }
        else
        {
            std::cout << "You Win" << std::endl;
        }

        if (guessRollNum > 6)
        {
            std::cout << "Out of Bound.. Range 1 to 6" << std::endl;
        }
    }
}

