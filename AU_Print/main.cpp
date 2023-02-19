#include <iostream>
#include <cstdio>
#include <chrono>

const char* logging_tmp = "Start %s at %ld";

void useless_function(void)
{
    printf(logging_tmp, __func__, std::chrono::high_resolution_clock::now());
}

int main()
{
    useless_function();

    return 0;
}