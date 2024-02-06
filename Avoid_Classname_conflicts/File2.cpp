#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    void Set_data(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

 