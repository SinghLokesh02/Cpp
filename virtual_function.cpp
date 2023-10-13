// Virtual Base Class in C++

#include <iostream>
using namespace std;
class Num1
{
public:
    virtual void Display()
    {
        cout << "I'm the function of Base Class" << endl;
    }
};
class Num2 : public Num1
{
public:
    void Display()
    {
        cout << "I'm the function of Derived Class" << endl;
    }
};
int main()
{
    // Naive way to create objects
    Num1 obj1;
    Num1 *ptr1 = &obj1;
    Num2 obj2;
    Num2 *ptr2 = &obj2;
    ptr1 = &obj2;
    // This will execute the function of Base Class as well as derived class
    // ptr1->Display();
    // ptr2->Display();

    // This will execute the function of Base Class only
    ptr1->Display();
    return 0;
}