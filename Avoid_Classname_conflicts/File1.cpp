#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int roll;
    void Set_data1(string name, int age, int roll)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
    }
    
    void display()
    {
        cout << "Name: " << name << "\nAge: " << age << "\nRoll: " << roll << endl;
    }
};

 