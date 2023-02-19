#include <iostream>

int main()
{
    std::string name;

    while(name.empty())
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name;


    // do while loop = do some block of code first
    //                 Then repeat again if condition is true

    int number;

    do
    {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The # is: " << number;


    for(int i = 1; i <= 10; i++)
    {
        std::cout << i << '\n';
    }

    std::cout << "HAPPA NEW YEAR!\n";


    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            break;
            //continue;
        }
        std::cout << i << '\n';
    }


    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++)
    {   
        for(int j = 1; j <= columns; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }


    // pseudo-random = NOT truly random (but close)

    srand(time(NULL));

    int num = (rand() % 6) + 1;

    std::cout << num;


    // Random event generator
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1: std::cout << "You win a bumper sticker!\n";
        break;
    case 2: std::cout << "You win a bumper t-shirt!\n";
        break;
    case 3: std::cout << "You win a bumper free lunch!\n";
        break;
    case 4: std::cout << "You win a bumper gift card!\n";
        break;
    case 5: std::cout << "You win a bumper concert tickets!\n";
        break;
    }


    return 0;
}