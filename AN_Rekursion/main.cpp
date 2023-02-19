#include <iostream>

void walk(int steps);
void walk2(int steps);
int factional(int num);
int factional2(int num);

int main()
{
    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // (iteratives vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = uses more memory, slower

    walk(100);
    walk2(100);

    std::cout << factional(10);
    std::cout << factional2(10);

    return 0;
}

void walk(int steps)
{
    for(int i = 0; i < steps; i++)
    {
        std::cout << "You take a step!\n";
    }
}

void walk2(int steps)
{
    if(steps > 0)
    {
        std::cout << "You take a step!\n";
        walk2(steps - 1);
    }
}

int factional(int num)
{
    int result = 1;
    for(int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return result;
}

int factional2(int num)
{
    if(num > 1)
    {
        return num * factional2(num - 1);
    }
    else
    {
        return 1;
    }    
}