#include <iostream>

void swap(std::string &x, std::string &y);
void printInfo(const std::string name, const int age);

int main()
{
    // memory adress = a location in memory where data is stored
    // a memory adress can accessed with & (adress-of operator)

    std::string name = "Lukas";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';


    // Pass by Value vs pass by Preference

    std::string x = "Kool-Aid";
    std::string y = "Water";
    //std::string temp;

    //temp = x;
    //x = y;
    //y = temp;

    swap(x, y);

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    // const parameter = parameter that is effectivly read only
    //                   code is more secure & conveys intent
    //                   useful for references and pointers

    std::string nameL = "Lukas";
    int ageL = 21;

    printInfo(nameL, ageL);


    // pointers = variable that stores a memory address of another variable
    //            sometimes its easier to work with an adress

    // & adress-of operator
    // * dereference operator

    std::string namePointer = "Lukas";
    int agePointer = 21;
    std::string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &namePointer;
    int *pAge = &age;
    //std::string *pFreePizza = &freePizza;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    //std::cout << *pFreePizza << '\n';


    // Null value = a specioa value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer

    // When using pointers, be careful that your code isnt
    // dereferencing null or pointing to free memory
    // this will cause undefined behavior

    int *pointer = nullptr;
    int z = 123;

    pointer = &z;

    if(pointer == nullptr)
    {
        std::cout << "adress was not assigned!\n";
    }
    else
    {
        std::cout << "adress was assigned!\n";
        std::cout << *pointer;
    }


    // dynamic memory = Memory that is allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we dont know how much memory
    //                  we will nedd. Makes our programs more flexible.
    //                  especially when accepting user input.

    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;

    std::cout << "adress: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;


    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}

void swap(std::string &x, std::string &y)
{
    std::string temp;

    temp = x;
    x = y;
    y = temp;
}

void printInfo(const std::string name, const int age)
{
    //name = " ":
    //age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}