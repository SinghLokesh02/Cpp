/*
The building block of C++ that leads to Object-Oriented programming is a Class. It is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object. For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.

Object

An Object is an identifiable entity with some characteristics and behavior. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.
// Data Member -> Datatypes (int ,char,float,double,bool,long)
// Memeber function -> function
*/
// Layman Program of C++
#include <bits/stdc++.h>
using namespace std;
class student // Starting of Class
{
public:
    int marks;
    string name;
    string name1 = "lokesh1";

    student display() // default
    {
        cout << "The total marks of student is : " << marks << endl;
        cout << "The name of student is : " << name << endl;
    }
}; //  End of Class

int main()
{
    student ayush, lokesh, deevesh; // Creating object ->ayush,lokesh,deevesh
    ayush.marks = 100;
    ayush.name = "Ayush";

    lokesh.marks = 90;
    lokesh.name = "Lokesh";

    deevesh.marks = 80;
    deevesh.name = "Deevesh";

    ayush.display();
    cout << endl;

    lokesh.display();
    cout << endl;

    deevesh.display();
    cout << endl;

    return 0;
}