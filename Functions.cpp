/*
Introduction of Functions in C++

A function is a block of code which only runs when it is called.

You can pass data, known as parameters, into a function.

Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.
It promote DRY principle(Which means do not repeat yourself)

Call a Function
Declared functions are not executed immediately. They are "saved for later use", and will be executed later, when they are called.

To call a function, write the function's name followed by two parentheses () and a semicolon ;

In the following example, myFunction() is used to print a text (the action), when it is called:
Inside main, call myFunction():

Function Declaration and Definition
A C++ function consist of two parts:

Declaration: the return type, the name of the function, and parameters (if any)
Definition: the body of the function (code to be executed)

#include <bits/stdc++.h>
using namespace std;

void sayhello(){ Declaration of function
    cout<<"Hello\n"; Definition of function
}
int main()
{
    sayhello(); Calling of Function
    return 0;
}

Four types of Function based on argument and return type

Function - no argument and no return value
Function - no argument but return value
Function - argument but no return value
Function - argument and return value

*/

// Program to demonstrate Function
/*
#include <bits/stdc++.h>
using namespace std;
void hello()
{
    cout << "Hello buddy!\n";
}
int main()
{
    hello();
    return 0;
}
*/

// Program to demonstrate types of Function based on argument and return type
/*
#include <bits/stdc++.h>
using namespace std;

// no argument and no return value function
void goodmorning()
{
    cout << "Good Morning\n";
}

// no argument and no return value function
string goodafternoon()
{
    return "Good Afternoon";
}

// argument but no return value function
void Number_upto_n(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
}

// argument with return value function
int sum(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    cout << "\n Calling Function with no argument and no return type\n";
    goodmorning();

    cout << "\nCalling function with no argument but return value...\n";
    cout << goodafternoon() << endl;

    cout << "\nCalling function with  argument but no return value...\n";
    Number_upto_n(10);

    cout << "\nCalling function with argument and return value...\n";
    cout << sum(3, 78) << endl;

    return 0;
}

*/

// Function Overloading
/*
In this tutorial, we will learn about the function overloading in C++ with examples.

In C++, two functions can have the same name if the number and/or type of arguments passed is different.

These functions having the same name but different arguments are known as overloaded functions. For example:
*/

// Notice all functions have same name but their parameters are different this is called function Overloading

// Program to demonstrate function Overloading
/*
#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int sum(int a, int b, int c, int d)
{
    return a + b + c + d;
}

int main()
{

    cout << "The sum of given Numbers is : " << sum(7, 6) << endl;

    cout << "The sum of given Numbers is : " << sum(7, 6, 9) << endl;

    cout << "The sum of given Numbers is : " << sum(7, 6, 8, 9) << endl;

    return 0;
}
*/

/*
Function with default arguments:-

In this tutorial, we will learn C++ default arguments and their working with the help of examples.
In C++ programming, we can provide default values for function parameters.
If a function with default arguments is called without passing arguments, then the default parameters are used.
However, if arguments are passed while calling the function, the default arguments are ignored.
*/

// Program to demonstrate function with default arguments
#include <bits/stdc++.h>
using namespace std;
void sum(int a, int b = 10)
{
    cout << "The sum of given Numbers is : " << a + b << endl;
}
int main()
{
    int a = 10, b = 20;
    // If we pass both arguments it is also correct the function sum(a,b) b value will be overrided;
    sum(100, 200);

    sum(10); // This is also correct as sum(a,b) use a value as 10 and b value as 20 as it is defined by default

    return 0;
}