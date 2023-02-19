#include <iostream>
#include <cmath>

int main()
{
    /*
        arithmetic operators = return the result of a specific arithmetic operation (+ * - /)
    */

    int student = 21;

    //student = student + 1;
    //student += 2;
    //student++;

    //student = student - 1;
    //student-=2;
    //student--;

    //student = student * 20;
    //student *= 20;

    //student = student / 3;
    //student /= 3;

    //int remainder = student % 2;

    // parenthesis
    // multiplication & division
    // addition & subtraction
    int students = 6 - (5 + 4) * 3 / 2;
 

    std::cout << student << std::endl;
    std::cout << students << std::endl;


    /*
        Useful math related functions
    */
    double x = 3.99;
    double y = 4;
    double z;

    //z = std::max(x, y);
    //z = std::min(x, y);
    //z = pow(2, 4);
    //z = sqrt(9);
    //z = abs(-3);
    //z = round(x);
    //z = ceil(x);
    z = floor(x);

    std::cout << z << std::endl;



    return 0;    
}