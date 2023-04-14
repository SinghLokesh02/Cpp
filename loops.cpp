/*
Loops Introduction
There may be a situation, when you need to execute a block of code several number of times. In general, statements are executed sequentially: The first statement in a function is executed first, followed by the second, and so on.

Programming languages provide various control structures that allow for more complicated execution paths.

A loop statement allows us to execute a statement or group of statements multiple times.

There are 3 types of Loops in C++
1) While loop
2) Do while loop
3) For loop

-> Nested loops - loop inside loop is called nested loop we will learn it further.


Syntax of While loop
while ( condition )
{
    code
}


Syntax of do While loop
do
{
    code
} while (condition);


Syntax of for loop
for (size_t i = 0; i < count; i++)
{
    code
}

*/

// Program Of printing Number upto N using All types of loops

#include <bits/stdc++.h>
using namespace std;

// Printing Using While Loop
void UsingWhile(int n)
{
    cout << "\nPrinting using while loop\n";
    int num = 0;
    while (num <= n)
    {
        cout << num << " ";
        num++;
    }
    cout << endl;
}

// Printing Using do While Loop
void Using_do_While(int n)
{
    cout << "\nPrinting using do while Loop\n";
    int num = 0;
    do
    {
        cout << num << " ";
        num++;
    } while (num <= n);
    cout << endl;
}

// Printing Using for Loop
void Usingfor(int n)
{
    cout << "\nPrinting using For Loop\n";
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "\nEnter The Number You want to Print Number : ";
    cin >> n;
    UsingWhile(n);     // Function to run while loop
    Using_do_While(n); // Function to run do while loop
    Usingfor(n);       // Function to run for loop

    cout << "Now we are going to demonstrate \"Infinite loop\".";
    bool takeinput;
    cout << "\nDo you want to run an Infinite loop Enter 1 for \"Yes\" or 0 for \"No\" : ";
    cin >> takeinput;

    if (takeinput)
    {
        int count = 1;
        // This is Example of Infinite lopp
        while (1)
        {
            cout << "Running Infinite Loop Iteration number : " << count << endl;
            count++;
        }
    }
    else
    {
        cout << "That means you know Infinite loop\n";
    }

    cout << endl;
    return 0;
}