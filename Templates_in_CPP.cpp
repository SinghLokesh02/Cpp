/*
Question : What is template in C++? and Why we use it?

Answer : Templates are the foundation of generic programming, which involves writing code in a way that is independent of any particular type.

Question : What is the syntax of template in C++?

template <class T>
class className
{
    Body of the class
};
*/

#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    int a = 10, b = 20;
    cout << "Sum of a and b is " << add(a, b) << endl;

    float c = 10.5, d = 20.5;
    cout << "Sum of c and d is " << add(c, d) << endl;
    return 0;
}

                        // ************* Template in Class *************

#include <iostream>
using namespace std;

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    void add(T a1, T b1)
    {
        cout<<"The sum of Number is : " <<a1 + b1<<endl;
    }
    void sub(T a1, T b1)
    {
        cout<<"The Subtraction of Number is : " <<a1 - b1<<endl;
    }
};

int main()
{

    Arithmetic<int> ar;
     ar.add(37,4);
     ar.sub(266,7);

    Arithmetic<float> ar1;
     ar1.add(32.56,34.23);
     ar1.sub(90.98,465.97);

    return 0;
}