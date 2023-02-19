#include <iostream>

int main()
{
    std::string datetime_now;

    auto logger = [&datetime_now](const char func) -> void
    {
        std::cout << datetime_now << " running: " << func << std::endl;
    };

    return 0;
}

