#include <iostream>

int main() 
{
    // This is a comment

    /*
    This is
    a multi-line
    comment    
    */

    std::cout << "I like Pizza!" << '\n';
    std::cout << "Its really good" << std::endl;

    // Variables:

    int x; // declaration
    x = 5; // assigment

    int y = 6; // all in one
    int sum = x + y;

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << sum << std::endl;
    
    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5;
    std::cout << days << std::endl;

    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';
    std::cout << initial << std::endl;

    // boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    // string (objects that represents asequence of text)
    std::string name = "Lukas";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string adress = "123 Fake St.";
    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " old." << std::endl;

    /*
        The const keyword specifies that a varaibles value is constant 
        tells the compiler to prevent anything from modifying it (read only)
    */
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm" << std::endl;

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
 
    return 0;
}