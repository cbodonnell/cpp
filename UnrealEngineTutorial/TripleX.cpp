#include <iostream>

int main()
{
    std::cout << "You are a secret agent breaking into a secure server room...";
    std::cout << std::endl;
    std::cout << "You need to enter the correct codes to continue...";
    
    const int CodeA = 4; //defines integer a = 4
    const int CodeB = 3; //defines integer b = 3
    const int CodeC = 2; //defines integer c = 2

    const int CodeSum = CodeA + CodeB + CodeB;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code" << std::endl;
    std::cout << "The codes add up to: " << CodeSum << std::endl;
    std::cout << "The product multiplies a x b x c" << std::endl;
    
    int PlayerGuess;
    std::cin >> PlayerGuess;
    std::cout << PlayerGuess;
    std::cout << std::endl;


    return 0;  
}