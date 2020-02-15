//
//  main.cpp
//  Practice
//
//  Created by Craig O'Donnell on 2/14/2020.
//  Copyright © 2020 Craig O'Donnell. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>



int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int num = atoi(argv[1]);
        int numDoubled = num * 2;
        std::cout << numDoubled << std::endl;    
    }

    return 0;
}