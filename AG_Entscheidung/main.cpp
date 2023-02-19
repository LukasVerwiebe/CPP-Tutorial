#include <iostream>

int main() 
{
    // if statements = do something if a condition is true.
    //                 if not, then dont do it.

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18)
    {
        std::cout << "Welcome to the site!";
    }
    else if(age < 0)
    {
        std::cout << "You havent been born yet!";
    }
    else if(age >= 100)
    {
        std::cout << "You are too old to enter this site!";
    }
    else
    {
        std::cout << "You are not old enough to enter!";
    }


    // switch = alternative to using many "else if" statements 
    //          compare one value against matching cases

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is January";
        break;
    case 2:
        std::cout << "It is Febuary";
        break;
    case 3:
        std::cout << "It is March";
        break;
    case 4:
        std::cout << "It is April";
        break;
    case 5:
        std::cout << "It is May";
        break;
    case 6:
        std::cout << "It is June";
        break;
    case 7:
        std::cout << "It is July";
        break;
    case 8:
        std::cout << "It is August";
        break;
    case 9:
        std::cout << "It is September";
        break; 
    case 10:
        std::cout << "It is October";
        break;
    case 11:
        std::cout << "It is November";
        break;
    case 12:
        std::cout << "It is December";
        break;                          
    default:
        std::cout << "Please enter in only numbers (1-12)";
        break;
    }

    std::cout << std::endl;


    // tenary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;    

    int grade = 75;
    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";
    std::cout << std::endl;


    int number = 8;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";
    std::cout << std::endl;


    bool hungry = true;
    //hungry ? std::cout << "You are hungry" : std::cout << "You aref full";
    std::cout << std::endl;
    std::cout << (hungry ? "You are hungry" : "You are full");
    std::cout << std::endl;


    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverse the logical state of its operand

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30)
    {
        std::cout << "The temperature is good!";
    }
    else
    {
        std::cout << "The temperature is bad!";
    }

    return 0;
}