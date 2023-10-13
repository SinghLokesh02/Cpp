#include <iostream>
using namespace std;
class Num1{
    int a = 10;
    int b = 20;
    public:
    void sum(){
        cout<<"The sum is : "<<a+b<<endl;
    }
};
class Num2:public Num1{
    int a = 10;
    int b = 20;
    public:
    void multiply(){
        cout<<"The sum is : "<<a*b<<endl;
    }
};
int main()
{
    // Naive way to create objects
    Num1 obj1;
    Num2 obj2;
    cout<<"Using Objects"<<endl;
    obj1.sum();
    obj2.multiply();

    // Creating Object with the help of Pointer
    Num1 *ptr1;
    Num2 *ptr2;
    ptr1 = &obj1;
    ptr2 = &obj2;
    cout<<"Using Pointer"<<endl;
    ptr1->sum();
    ptr2->sum();
    return 0;
}