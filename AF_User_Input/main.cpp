#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "Whats your full name?: ";
    std::cin >> name;
    //std::getline(std::cin << std::ws, name);

    std::cout << "Whats your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << std::endl;
    std::cout << "Your are " << age << " years old";

    return 0;
}