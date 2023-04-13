// Introduction of Variables

/*
Variables are like a container which are used to store value.

A variable is a storage place that has some memory allocated to it.It is used to store some form of data.Different types of variables require different amounts of memory

declaration of Variable
datatype variable_name;

Ex:- int a; Initialization of Variable

a = 10; Assigning value to a variable

int a = 10; Initialization and assigning of value at the same time to the variable

Rules for Defining a variable in C++

1) Every variable name should start with alphabets or underscore (_).
2) No spaces are allowed in variable declaration.
3) Except underscore (_) no special symbol are allowed in the middle of the variable declaration.
4) Maximum length of variable is 8 characters depend on compiler and operation system.
5) Every variable name always should exist in the left hand side of assignment operator.
6) No keyword should access variable name.
 Note: In a c program variable name always can be used to identify the input or output data.

 Types of Datatypes
 int, float, char, double, long, bool, short

 Auto keyword in c++
 The auto keyword specifies that the type of the declared variable will automatically be deduced from its initializer.


 Scope of a variable
 1) Local scope -> Variable declared within the body of a function or block are said to have local scope and are reffered to as 'local variablr'. They can be use only by statements inside the body of the function or the block they are declared within.

 2) Global Scope -> The variables whose scope is not limited to any block or function are said to have global scope and are reffered to as "global variable".


 Types of variables
 1) Local variable

 2) Instance variable

 3) Static variable -> Static variables are declared using the keyword "static".within a class outside any method,constructor,or block.Space allocated only once for static variables i.e we have a single copy of the static variables corresponding to a class. this variable automatically destroyed when the program end.lifetime of static variable is equal to lifetime of program.


 Overflow and Underflow :- 
 Overflow occurs when we assign a value to more than its range.

 Underflow is opposite to overflow.

*/

// Program
#include <bits/stdc++.h>
using namespace std;
int a = 10; // Global variable;
int main()
{
    int num1 = 10; // Declaration and Initialization of variable
    int num2 = 20; // Local variable as it is inside the main block/function

    int num;
    char c;
    bool isTue;
    float n;
    double d;
    short sort; // Declaration of all datatypes

    cout << "The sum of given number is : " << num1 + num2 << endl;
    auto name = "Lokesh Singh"; // Use of auto keyword
    cout << name << endl;

    int mini = INT_MIN; // This store the minimum value of int beyond this it is going to be underflow;
    int maxi = INT_MAX; // This store the maximum value of int beyond this it is going to be overflow;

    cout << "The minimum value of Int is : " << mini << endl;
    cout << "The Maximum value of Int is : " << maxi << endl;

    return 0;
}