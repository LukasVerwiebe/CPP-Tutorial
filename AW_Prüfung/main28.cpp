#include <iostream>
#include <math.h>

class VectorBase
{
    public:
        virtual float magnitude() = 0;
};

class Vector2D : public VectorBase
{
    public:       
        Vector2D(){};
        Vector2D(int x, int y)
        {
            this->x = x;
            this->y = y;
        };

        virtual float magnitude() override 
        {
            return sqrt(pow(this->x, 2) + pow(this->y, 2));
        }; 

        bool operator == (const Vector2D& other)
        {
            return this->x == other.x && this->y == other.y;
        };

        Vector2D operator + (const Vector2D& other)
        {
            return Vector2D(this->x + other.x, this->y + other.y);
        };

        Vector2D operator - (const Vector2D& other)
        {
            return Vector2D(this->x - other.x, this->y - other.y);
        };

        void* operator new(size_t) = delete;
        void operator delete(void*) = delete;

    private:
        int x, y; 
};

class Vector3D : public Vector2D
{
    public:        
        Vector3D(){};
        Vector3D(int x, int y, int z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        };

        virtual float magnitude() override
        {
            return sqrt(Vector2D(this->x, this->y).magnitude() + pow(this->z, 2));
        };

        bool operator == (const Vector3D& other)
        {
            return this->x == other.x && this->y == other.y && this->z == other.z;
        };

        Vector3D operator + (const Vector3D& other)
        {
            return Vector3D(this->x + other.x, this->y + other.y, this->z + other.z);
        };

        Vector3D operator - (const Vector3D& other)
        {
            return Vector3D(this->x - other.x, this->y - other.y, this->z - other.z);
        };

        void* operator new(size_t) = delete;
        void operator delete(void*) = delete;

    private:
        int x, y, z; 
};

int main()
{
    return 0;
}