// Syntax of function overloading with different parameters
/*

function_name(type1, type2, type3, ...)
{
    // body of the function
}
function_name(type1, type2, type3, ...)
{
    // body of the function
}

*/

#include <bits/stdc++.h>
using namespace std;

void sum(double a, double b = 2.5) // Default argument
{
    cout << "Sum is " << a + b << endl;
}

void sum(int a, int b)
{
    cout << "Sum is " << a + b << endl;
}

void sum(int a, int b, int c)
{
    cout << "Sum is " << a + b + c << endl;
}

int main()
{
    sum(11.2); //  Calls the function with default value for arg2
    sum(10, 20);
    sum(11.2, 12.4);
    sum(10, 20, 30);

    return 0;
}