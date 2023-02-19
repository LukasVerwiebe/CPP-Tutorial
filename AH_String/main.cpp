#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // name.empty()
    // name.clear()
    // name.append("@gmail.com")
    // name.at(0)
    // name.insert(0, "@")
    // name.find('B')
    // name.erase(0, 3)
    if(name.length() > 12) 
    {
        std::cout << "Your name cant be over 12 characters";
    }
    else
    {
        std::cout << "Welcome " << name;
    }
}