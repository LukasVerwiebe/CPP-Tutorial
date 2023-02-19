#include <iostream>

int main()
{
    // type conversion = conversion a value of one data type to another
    // Implicit = automatic
    // Explicit = Precede value with new data type (int)

    double x = (int)3.14;
    std::cout << x << std::endl;

    char y = 100;
    std::cout << y << std::endl;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << "%" << std::endl;


    // Conversion operators:

    //short a = 125;
    //auto b = a * 10e9;
    //auto weird_val = 1.0/3 * pi;

    /* static_cast: float zu interger */
    float pi = 3.14;
    int rounded_pi = static_cast<int>(pi);
    std::cout << rounded_pi << std::endl;


    /* const_cast: Temporär const status ausfheben */
    const char* const constant_message = "A constant message of mine";
    char* mutable_message = const_cast<char*>(constant_message); 

    /* dynamic cast:  */
    class Base{};
    class Derived: public Base{};

    Base* pointer_to_base_inst;
    Derived derived_inst;

    pointer_to_base_inst = dynamic_cast<Base*>(&derived_inst);

}