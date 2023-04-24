/*
Introduction to Structure in CPP

Structure is a collection of variables of different data types under a single name. It is similar to a class in that, both holds a collecion of data of different data types.

For example: You want to store some information about a person: his/her name, citizenship number and salary. You can easily create different variables name, citNo, salary to store these information separately.

However, in the future, you would want to store information about multiple persons. Now, you'd need to create different variables for each information per person: name1, citNo1, salary1, name2, citNo2, salary2

You can easily visualize how big and messy the code would look. Also, since no relation between the variables (information) would exist, it's going to be a daunting task.

A better approach will be to have a collection of all related information under a single name Person, and use it for every person. Now, the code looks much cleaner, readable and efficient as well.

This collection of all related information under a single name Person is a structure.

How to declare a structure in C++ programming?
The struct keyword defines a structure type followed by an identifier (name of the structure).

Then inside the curly braces, you can declare one or more members (declare variables inside curly braces) of that structure. For example:

struct Person
{
    char name[50];
    int age;
    float salary;
};
Here a structure person is defined which has three members: name, age and salary.

When a structure is created, no memory is allocated.

The structure definition is only the blueprint for the creating of variables. You can imagine it as a datatype. When you define an integer as below:

int foo;
The int specifies that, variable foo can hold integer element only. Similarly, structure definition only specifies that, what property a structure variable holds when it is defined.

Note: Remember to end the declaration with a semicolon (;)


*/

#include <bits/stdc++.h>
using namespace std;
struct student
{
    int rollno;
    char name[20];
    int marks[10];
    int total = 0;
};

int main()
{
    student s1;
    cout << "Enter Your Name\n";
    cin >> s1.name;
    cout << "Enter Your Roll No\n";
    cin >> s1.rollno;
    cout << "Enter Your Marks\n";

    for (int i = 0; i < 10; i++)
    {
        cin >> s1.marks[i];
        s1.total += s1.marks[i];
    }
    cout << "Your Marks are " << s1.total << "\n";
    cout << s1.name << endl;

    return 0;
}