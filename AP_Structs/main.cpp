#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled;
};

struct Car
{
    std::string model;
    int year;
    std::string color;
};

typedef struct 
{
    int age;
} test;

struct contact
{
    std::string name;
    int age;
    std::string adress;
} Max;

typedef struct
{
    unsigned int : 7;
    unsigned int on_off : 1;
    unsigned int power : 5;
    unsigned int security : 3;
} nuclear_plant;

// bits: 15 14 13 | 12 11 10 9 8 |     7     | 6 5 4 3 2 1 0
//       security   power           onoff           empty

enum Colors
{
    WHITE,
    BLACK,
    RED,
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main()
{
    // struct = A structure that group related varibles under one name
    //          structs can contain many different data types (string, int, double, bool, etc.)
    //          varibales in a struct are known as "members"
    //          members can be access with . "Class Memnber Access Operator"

    student student1;
    student1.name = "Lukas";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Peter";
    student2.gpa = 2.2;
    student2.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';



    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    //std::cout << &car1 << '\n';
    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car)
{
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color)
{   
    car.color = color;
}