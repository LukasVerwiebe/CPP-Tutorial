#include <iostream>

class Point2D
{
    public:
        float x, y;

        Point2D(float _x, float _y)
        {
            this->x = _x;
            this->y = _y;
        }

        Point2D operator + (const Point2D& other)
        {   
            return Point2D(this->x + other.x, this->y + other.y);
        }

        bool operator == (const Point2D& other)
        {
            //return (this == &other || (this->x + other.x, this->y + other.y));
            return this->x == other.x && this->y == other.y;
        }
};

Point2D operator + (const Point2D& one, const Point2D& other)
{   
    return Point2D(one.x + other.x, one.y + other.y);
}

int main()
{
    Point2D point2d(1.5f, 2.5f);
    Point2D point2d2(1.5f, 4.0f);

    Point2D result = point2d + point2d2;
    std::cout << result.x << std::endl;

    
    if(point2d == point2d2)
    {
        std::cout << "Gleich" << std::endl;
    }
    else
    {
        std::cout << "Ungleich" << std::endl;
    }

    
    



    return 0;
}