// Introduction to inheritance

// Inheritance is one of the most important feature of Object Oriented Programming.
/*
One of the most important concepts in object-oriented programming is that of inheritance. Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. This also provides an opportunity to reuse the code functionality and fast implementation time.
When creating a class, instead of writing completely new data members and member functions, the programmer can designate that the new class should inherit the members of an existing class. This existing class is called the base class, and the new class is referred to as the derived class. The idea of inheritance implements the is a relationship. For example, mammal IS-A animal, dog IS-A mammal hence dog IS-A animal as well and so on

Inheritance is a fundamental feature of object-oriented programming (OOP) languages like C++. It allows you to define a new class (derived class or subclass) based on an existing class (base class or superclass), inheriting its properties and behaviors. The derived class can extend or modify the functionality of the base class while reusing its existing code.

In C++, inheritance is achieved using the class keyword followed by a colon and the access specifier, and then the name of the base class. Here's the basic syntax:

Reusing classes saves time and Money
The concept of reusability in C++ is supported using Inheritance
we can reuse the properties of an existing class by inheriting from it
The existing class is called as base class
The new class which is inherited is called as Derived Class;

There are different types of Inheritance
1) Single Inheritance
2) Multilevel Inheritance
3) Multiple Inheritance
4) Hybrid Inheritance
5)Hierarchical Inheritance

Syntax of Inheritance
class DerivedClass : access-specifier BaseClass
{
    // body of the derived class.
};
// Default visibilty mode is private

Link :- https://www.geeksforgeeks.org/inheritance-in-c/


Note about Visibility Modes
1) Private Visibility Mode
2) Public Visibility Mode
3) Protected Visibility Mode

1) Private Visibility Mode
All the members of the base class are inherited as private members of the derived class
The public and protected members of the base class become private members of the derived class

2) Public Visibility Mode
All the members of the base class are inherited as public members of the derived class
The protected members of the base class become protected members of the derived class
The private members of the base class remain inaccessible to the derived class

3) Protected Visibility Mode
All the members of the base class are inherited as protected members of the derived class
The public members of the base class become protected members of the derived class
The private members of the base class remain inaccessible to the derived class


*****
private member can never be Inherited
*/

// Syntax of Inheritance
#include<bits/stdc++.h>
using namespace std;
class employee{
    public:
    int id;
    float salary;
    employee(int id){
        this->id = id;
        salary = 34.0;
    }
    employee(){};
};

// Derived Class
class programmer : public employee{
    public:
    programmer(int id){
        this->id = id;
    }
    int languageCode = 9;
};
int main()
{
    employee lokesh(1),sonali(2);
    cout<<"The salary of Lokesh Singh is : "<<lokesh.salary<<endl;
    cout<<"The salary of sonali Singh is : "<<sonali.salary<<endl;

    programmer diwakar(1);
    cout<<diwakar.id<<endl;
    cout<<diwakar.languageCode<<endl;


return 0;
}