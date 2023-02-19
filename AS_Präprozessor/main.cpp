#include <iostream>
#include "math_lib.h"

#ifndef _ALLOW_SRC_COMPILATION_
    #error "Compilation was not allowed"
#endif

int sum_ints(int a, int b) { return a + b; }

int main()
{
    std::cout << "1 + 2 = " << sum_ints(1, 2) << std::endl;
    return 0;
}