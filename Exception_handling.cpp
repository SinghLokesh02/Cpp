// Exception Handling in C++

// Exception Handling in C++ is a powerful mechanism that handles runtime errors, such as divide by zero, out of bound array access, etc.

// Example - 1
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a = 10, b = 0, c;
//     try
//     {
//         if (b == 0)
//             throw 1;
//         c = a / b;
//         cout << c << endl;
//     }
//     catch (int e)
//     {
//         cout << "Division by zero not allowed" << endl;
//         cout << e << endl;
//     }
//     return 0;
// }

// Output:
// Division by zero not allowed
// 1

// Example - 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     int c; // Declare 'c' before using it

//     try
//     {
//         cout << c << endl; // 'c' is declared, but its value is uninitialized
//         throw 1;           // Throw an integer exception
//         cout << c << endl; // This line will not be executed
//     }
//     catch (int e)
//     {
//         cout << "Caught an exception with value: " << e << endl;
//     }

//     return 0;
// }


// Example - 3

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int c; // Declare 'c' before using it
    cout<<"Enter the value of C\n";
    cin>>c;
    try
    {
        cout << c << endl; // 'c' is declared, but its value is uninitialized
        throw "\nThis is not valid Integer Value\n";           // Throw an integer exception
        cout << c << endl; // This line will not be executed
    }
    catch (const char* e)
    {
        cout << "please Enter a proper integer value" << e << endl;
    }

    return 0;
}
