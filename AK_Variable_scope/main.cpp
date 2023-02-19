#include <iostream>

int myNum = 5;

void printNum();

int main()
{
    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions

    int myNum = 2;

    printNum();
    std::cout << myNum << '\n';

    return 0;
}

void printNum()
{
    std::cout << myNum << '\n';
}