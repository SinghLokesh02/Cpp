/*
switch Case Statements Introduction

The C++ Switch case statement evaluates a given expression and based on the evaluated value(matching a certain condition), it executes the statements associated with it. It is an alternative to the long if-else-if ladder which provides an easy way to dispatch execution to different parts of code based on the value of the expression.

What is a switch statement in C++?
The switch statement in C++ is a flow control statement that is used to execute the different blocks of statements based on the value of the given expression. We can create different cases for different values of the switch expression. We can specify any number of cases in the switch statement but the case value can only be of type int or char.

Syntax of switch Statement in C++
switch (expression) {
    case value_1:
        // statements_1;
        break;
    case value_2:
        // statements_2;
        break;
    .....
    .....
    default:
        // default_statements;
        break;
}

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "\nIntroducing Switch case Statement\n";
    int number;
    cout << "\nEnter Number between 1-5 : ";
    cin >> number;
    switch (number)
    {
    case 1:
        cout << "Case 1";
        break;
    case 2:
        cout << "Case 2";
        break;
    case 3:
        cout << "Case 3";
        break;
    case 4:
        cout << "Case 4";
        break;
    case 5:
        cout << "Case 5";
        break;
    default:
        cout << "Default";
    }
    cout << endl;
    return 0;
}