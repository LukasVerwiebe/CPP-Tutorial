#include <iostream>

void happyBirthday(std::string name, int age);
double square(double length);
double cube(double length);
void bakePizza();
void bakePizza(std::string topping1);
int sum_int(int a, int b);
typedef int (*func_ptr)(int, int);
int other_func(func_ptr func, int a, int b);

int main()
{
    // function = a block of reusable code

    std::string name = "Lukas";
    int age = 22;

    happyBirthday(name, age);


    // return = retrun a value back to the spot
    //          where you called the encompassing function

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    bakePizza("pepperoni");

    other_func(sum_int, 1, 2);

    return 0;
}

void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to you " << name << "!\n";
    std::cout << "Happy Birthday to you " << name << "!\n";
    std::cout << "Happy Birthday to you " << name << "!\n";
    std::cout << "You are " << age << " years old!\n";
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}

void bakePizza()
{
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1)
{
    std::cout << "Here is your " << topping1 << " pizza!\n"; 
}

int sum_int(int a, int b)
{
    return a + b;
}

int other_func(func_ptr func, int a, int b)
{
    return func(a, b);
}
