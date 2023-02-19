#include <iostream>

template <typename U, size_t V = 10>
class MyClass
{
    public:
        U array[V];
};

int main()
{   
    MyClass<int, 4> intst1;
    MyClass<double, 22> intst2;

    return 0;
}