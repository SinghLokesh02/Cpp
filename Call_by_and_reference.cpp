/*
Introduction 

Functions can be invoked in two ways: Call by Value or Call by Reference. These two ways are generally differentiated by the type of values passed to them as parameters.

The parameters passed to function are called actual parameters whereas the parameters received by function are called formal parameters.

Call By Value: In this parameter passing method, values of actual parameters are copied to function’s formal parameters and the two types of parameters are stored in different memory locations. So any changes made inside functions are not reflected in actual parameters of the caller.

Call by Reference: Both the actual and formal parameters refer to the same locations, so any changes made inside the function are actually reflected in actual parameters of the caller.

*/

// Call by Value

#include <bits/stdc++.h>
using namespace std;
int Change_value(int number)
{
    return number + 5;
}
int main()
{
    cout << "\nExample of call By value\n";
    int number;
    cout << "\nEnter any random Integer Value : ";
    cin >> number;
    Change_value(number);
    cout << "Printing The number after calling function change value\n ";
    cout << number << endl;
    return 0;
}


// Call by Reference

#include <bits/stdc++.h>
using namespace std;
int Change_value1(int &number)
{
    return number + 5;
}
int main()
{
    cout << "\nExample of call By reference\n";
    int number;
    cout << "\nEnter any random Integer Value : ";
    cin >> number;
    Change_value1(number);
    cout << "Printing The number after calling function change value\n ";
    cout << number << endl;
    return 0;
}