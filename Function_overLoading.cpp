// Introduction to function Overloading
/*
Function overloading is a feature in C++ where two or more functions can have the same name but different parameters.

Function overloading can be considered as an example of polymorphism feature in C++.

Following is the example of two functions that adds two numbers but with different parameters:

*/

#include <bits/stdc++.h>
using namespace std;

// Example of Function OverLoading
void sum(int a, int b)
{
    cout << "The sum of two numbers is : " << a + b << endl;
}

void sum(int a, int b, int c)
{
    cout << "The Sum Of Three Numbers Is : " << (a + b + c) << endl;
}

void sum(int a, int b, int c, int d)
{
    cout << "The Sum Of Four Numbers Is : " << (a + b + c + d) << endl;
}

int main()
{
    int a, b, c, d;
    cout << "Enter the value of a \n";
    cin >> a;
    cout << "Enter the value of b \n";
    cin >> b;
    cout << "Enter the value of c \n";
    cin >> c;
    cout << "Enter the value of d \n";
    cin >> d;
    sum(a, b);
    sum(a, b, c);
    sum(a, b, c, d);
    return 0;
}