#include <iostream>
#include <functional>

auto creatFunction1()
{
    return []() {};    
}

auto creatFunction2(std::function<int()> func)
{
    return func;
    //return []() {};    
}

int main()
{
    int x = 0;

    auto lambda = [&x]() -> void 
    {
        std::cout << "hello von lambda " << x << std::endl;
    };

    auto doubeValue = [](auto x) -> auto
    {
        return  x + x;
    };

    //std::function<int(int)> voidLambda = []() -> int {return 0; };

    lambda();
    x = 10;
    lambda();
    x = doubeValue(x);
    lambda();


    return 0;
}