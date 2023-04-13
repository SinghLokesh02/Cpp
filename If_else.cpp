/*
If else Conditionals Introduction

Conditional statements are used to perform different actions based on different conditions.
Very often when you write code, you want to perform different actions for different decisions.

You can use conditional statements in your code to do this.

In C++ we have the following conditional statements:

Use if to specify a block of code to be executed, if a specified condition is true
Use else to specify a block of code to be executed, if the same condition is false
Use else if to specify a new condition to test, if the first condition is false
Use switch to specify many alternative blocks of code to be executed.

*/

// Ex of If else Conditionals

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
int age;
cout<<"Please Enter your age : ";
cin>>age;
if(age>=18)
cout<<"Yes you can vote now.";
else
cout<<"No you cannot vote now";
return 0;
}
*/

// Ex of If else if else Conditionals ladder
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the marks you got out of 100 : ";
    cin >> n;
    if (n >= 90)
        cout << "Your grade is : \"A\".";
    else if (n >= 80 && n < 90)
        cout << "Your grade is : \"B\".";
    else if (n >= 70 && n < 80)
        cout << "Your grade is : \"C\".";
    else if (n >= 60 && n < 70)
        cout << "Your grade is : \"D\".";
    else
    {
        cout << "Your Grade is \"F\"." << endl;
    }
    return 0;
}