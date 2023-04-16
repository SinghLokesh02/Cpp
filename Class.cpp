/*
The building block of C++ that leads to Object-Oriented programming is a Class. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object. For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.

Object

An Object is an identifiable entity with some characteristics and behavior. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.

*/
// Layman Program of C++
#include <bits/stdc++.h>
using namespace std;
class Student // Creating Class
{

public:
    string name; // data member of Class
    int marks, roll;
    void display() // Member Function
    {
        cout << "Name : " << name << " "
             << "Marks : " << marks << " "
             << "Roll no : " << roll << endl;
    }
};

int main()
{
    Student lokesh; // Student object
    lokesh.name = "Lokesh Singh";
    lokesh.marks = 90;
    lokesh.roll = 4;
    lokesh.display();

    return 0;
}