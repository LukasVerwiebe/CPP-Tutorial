#include <iostream>

template <typename T, typename U>
auto max(T x, U y)
{
    return (x > y) ? x : y;
}

int main()
{
    // function template = descibes what a function looks like.
    //                     Can be used to generate as many overload functions as needed
    //                     as needed, each using different data types

    //                      EX. "Its like a cookie-cutter ..."
    //                      "Cookies are the same shape, but the dough used can be differnt"

    std::cout << max(1, 2.1) << '\n';
    std::cout << max('1', '2') << '\n';
    std::cout << max(1, 2) << '\n';
    std::cout << max(1.4, 2.5) << '\n';

    return 0;
}