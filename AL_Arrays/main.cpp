#include <iostream>
#include <vector>
#include <map>
#include <set>

double getTotal(double money[], int size);
int searchArray(int array[], int size, int element);
void sort(int array[], int size);

int main()
{
    // array = a data structure that can hold multiple values 
    //          values are accessed by an index number
    //          "kind of like a vaiable that holds multiple values"

    std::string car[] = {"Corvette", "Mustang", "Camry"};

    car[0] = "Camaro";

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';


    double prices[4];

    prices[0] = 5.00;
    prices[1] = 7.50;
    prices[2] = 9.99;
    prices[3] = 15.00;

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';


    // sizeof() = determines the size in bytes of a:
    //            variable, data type, class,objects, etc.
    std::cout << '\n';

    std::string name = "Lukas Verwiebe";
    double gpa = 2.5;
    char grade = 'A';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(grades[0]) << " elements\n";
    std::cout << sizeof(students)/sizeof(students[0]) << " elements\n";


    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++) 
    {
        std::cout << students[i] << '\n';
    }

    // foreach loop = loop that eases the traversal over an iterable data set
    std::cout << '\n';

    for(std::string student : students)
    {
        std::cout << student << '\n';
    }

    double money[] = {49.99, 15.05, 75, 9.99};
    int sizeMoney = sizeof(money)/sizeof(money[0]);
    double total = getTotal(money, sizeMoney);

    std::cout << "$" << total;


    // Search an array for an element
    std::cout << '\n';
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int sizeNum = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, sizeNum, myNum);

    if(index != -1)
    {
        std::cout << myNum << " is at index " << index;
    }
    else
    {   
        std::cout << myNum << " is not in the array";
    }


    // Sort an array
    std::cout << '\n';
    int array[] = {10,1,9,2,8,3,7,4,6,5};
    int sizeOfArray = sizeof(array)/sizeof(array[0]);

    sort(array, sizeOfArray);

    for(int element : array)
    {
        std::cout << element << " ";
    }


    // fill() = Fills a range of elements with a specified value fill(begin, end, value)

    std::string foods[10];

    fill(foods, foods + 100, "pizza");

    for(std::string food : foods)
    {
        std::cout << food << '\n';
    }

    // Fill an array with user input
    std::string foodArray[5];
    int sizeFood = sizeof(foodArray)/sizeof(foods[0]);
    std::string tmp;

    for(int i = 0; i < sizeFood; i++)
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, tmp);
        if(foodArray[i] == "q")
        {
            break;
        }
        else
        {
            foodArray[i] == tmp;
        }
    }
    
    std::cout << "You like the following food:\n";

    for(int i = 0; !foodArray[i].empty(); i++)
    {
        std::cout << foodArray[i] << '\n';
    }


    // Multidimensional arrays
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    int rowsCars = sizeof(cars)/sizeof(cars[0]);
    int columsCars = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rowsCars; i++)
    {
        for(int j = 0; j < columsCars; j++)
        {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }


    // vector, map, set

    std::vector<int> v{1,2,3,4};
    std::map<std::string, int> m;
    std::set<std::string> s;

    v.push_back(23);
    m["test"] = 23;
    s.insert("Test");

    v[3] = 8;

    std::vector<int>::iterator it = v.begin();

    
    for(; it != v.end(); it++)
    {        
        auto value_pointed = *it;
        std::cout << value_pointed << std::endl;
    }

    return 0;
}

double getTotal(double money[], int size) 
{
    double total = 0;

    for(int i = 0; i < size; i++)
    {
        total += money[i];
    }

    return total;
}

int searchArray(int array[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

void sort(int array[], int size)
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}