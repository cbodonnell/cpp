//
//  main.cpp
//  Practice
//
//  Created by Craig O'Donnell on 9/6/16.
//  Copyright © 2016 Craig O'Donnell. All rights reserved.
//

#include <iostream>
#include <string>

void arguments(int argc, char **argv)
{
    int counter;
    printf("Program Name Is: %s", argv[0]);
    if (argc == 1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if (argc >= 2)
    {
        printf("\nNumber Of Arguments Passed: %d", argc);
        printf("\n----Following Are The Command Line Arguments Passed----");
        for (counter = 0; counter < argc; counter++)
            printf("\nargv[%d]: %s", counter, argv[counter]);
        
    }
    std::cout << std::endl;
}

void function_works() // Function that does not return anything.
{
    std::cout << "The function works!" << std::endl; // cout outputs to user
}

int set_num() // Function that returns an integer.
{
    int num; // Variables must be delcared first before being assigned.
    std::cout << "Pick a number: ";
    std::cin >> num; // cin takes input from user
    return num;
}

void display_num(int num) // Displays the number you chose and whether it is a large number or not and whether it is even or not.
{
    std::cout << "Your number is: ";
    std::cout << num << std::endl;
    if (num >= 100) // The number is large if it is 100 or greater
        std::cout << "You entered a large number!" << std::endl;
    else
        std::cout << "You entered a small number!" << std::endl;
    if (num % 2 == 0) // The remainder of the number divided by two is zero (the number is even)
        std::cout << "You entered an even number!" << std::endl;
    else
        std::cout << "You entered an odd number!" << std::endl;
}

void is_number_7_or_13(int num)
{
    switch (num)
    {
    case 7:
    {
        std::cout << "You entered lucky number 7!" << std::endl;
        break;
    }
    case 13:
    {
        std::cout << "You entered unlucky number 13! Oh no!!" << std::endl;
        break;
    }
    default:
        std::cout << "You didn't enter number 7 or 13." << std::endl;
        break;
    }
}

int add(int x, int y) // Variable types are declared in parameters. They are then assigned when called with arguments.
{
    return x + y;
}

void count_to_num(int num)
{
    int maxCount = 100;

    if (num <= maxCount)
    {
        std::cout << "Let's count to your number:" << std::endl;
        for (int count = 1; count <= num; ++count) // (initialized variable(s), condition to check, end statement)
        {
            if (count < 10)
                std::cout << "0" << count << " ";
            else
                std::cout << count << " ";
            if (count % 10 == 0)
                std::cout << std::endl;
            // Use the debugger to trace through code and look for errors.
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "Your number is to large to count to!" << std::endl;
    }
}

int main(int argc, char **argv) // All programs must have a main function. Program begins with this function.
{
    // insert code for a function between brackets
    arguments(argc, argv);
    int num(set_num()); // Using direct initialization to create and set a variable
    is_number_7_or_13(num);
    display_num(num);
    std::cout << "Your number + 5 = " << add(num, 5) << std::endl;
    count_to_num(num);
    function_works();
    return 0; // Main function returns 0 if successful
}
