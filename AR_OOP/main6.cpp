#include <iostream>

class FriendClass;

class SimpleClass
{
    friend FriendClass;
    int age;
    std::string name;

    public:
        SimpleClass(int age, std::string name)
        {
            this->age = age;
            this->name = name;
        }
};

class FriendClass
{
    public:
        void print_attrs_of_simpleclasss_inst(SimpleClass simple_class_inst) // <- why not using a const pointer to a constant class? See 2nd below
        {
            printf( "The instance of `SimpleClass` stored at the %x address has (%d) `val`, "\
                    "the (%s) `c_string`, and the (%0.5f) `pi` attributes.\n",
                    &simple_class_inst, simple_class_inst.age, simple_class_inst.name);

            // If you would make changes to `simple_class_inst`, what exactly would you expect? eg:
            simple_class_inst.age = 33;
        }
};

class test final // Kann keine vererbung anwenden
{
    int age;
    std::string name;
    void* operator new(size_t a) = delete; // Operator wird nicht im heap erstellt sonden nur im stack
};

int main()
{   
    SimpleClass my_inst(20, "Nobody is going to know about this secret. I'll just let friends know.");

    FriendClass friend_of_my_inst;


    return 0;
}