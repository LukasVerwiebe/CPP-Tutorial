#include <iostream>

using namespace std;

class MyExceptionOfSomeDort : public runtime_error
{
    public:
        MyExceptionOfSomeDort(const string& message) : runtime_error(message) {}

        virtual const char* what() noexcept
        {
            cout << "Trying out my derived 'runtime_rerror'\n";
            return runtime_error::what();
        }        
};

float funct(float numerator, float denominator)
{
    if(denominator)
    {
        return numerator / denominator;
    } 
    else
    {
        std::string error_message = "Cannot perform a division with the denominator: ";
        error_message += std::to_string(denominator);
        throw std::runtime_error(error_message);
    }
}

int main()
{   
    try
    {
        double zahl = 20;
        double test = 0.0;
        double neu = zahl / test;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        //std::cout << "test fehler" << std::endl;
    }

    funct(2.0, 0);

    return 0;
}