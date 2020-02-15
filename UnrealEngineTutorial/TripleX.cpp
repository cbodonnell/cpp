#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "You are a secret agent breaking into a level " << Difficulty;
    std::cout << "\nYou need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    const int CodeA = rand() % Difficulty + Difficulty; 
    const int CodeB = rand() % Difficulty + Difficulty; 
    const int CodeC = rand() % Difficulty + Difficulty; 

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to: " << CodeSum;
    std::cout << "\n+ The product multiplies to: " << CodeProduct << std::endl;
    
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nCongrats Bubsie you can move on to the next level\n\n";
        return true;
    }
    else 
    {
        std::cout << "\nWooooW Bubsie slow it down for papa, you are going to need to retry this level\n\n";
        return false;
    }
}

int main()
{ 
    srand(time(NULL)); // Create new random sequence based on time of day
    
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty) // Loop game until max level reached
    {
        bool bLevelComplete = PlayGame (LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "***Congrats Bubsie you have succesfully busted!***";
    return 0;  
}