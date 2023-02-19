#include <iostream>

namespace first
{    
    int x = 1;
}

namespace second
{
    int x = 2;
}

int main() 
{
    /*
        Namespace = provides a solution for preventing name conflicts in large
                    projects. Each entity needs a unique name. A namespace
                    allows fpr identically named entities as long as the 
                    namespaces are different. 
    */

    using namespace first;
    std::cout << x << std::endl;

    int x = 0;

    std::cout << first::x <<  std::endl;
    std::cout << second::x <<  std::endl;
    std::cout << x <<  std::endl;

    // Für nutzung von Namespace std
    using std::cout;
    using std::endl;
    using std::string;

    string name = "Lukas";
    cout << name << endl;




    return 0;
}