#include <bits/stdc++.h>
using namespace std;

// Hierarchical Inheritance

// Base Class
class Parent
{
public:
    string father_name;
    string mother_name;
    Parent()
    {
        cout << "\nEnter the Father name : ";
        cin >> father_name;
        cout << "Enter the Mother name : ";
        cin >> mother_name;
    }
};

// Derived class 1
class Child1 : public Parent
{
public:
    string son;
    Child1()
    {
        cout << "Enter the Child name : ";
        cin >> son;
    }
    void print()
    {
        cout << "\n\nThe father name is : " << father_name << endl;
        cout << "The Mother name is : " << mother_name << endl;
        cout << "The Son name is : " << son << endl;
    }
};

// Derived class 2
class Child2 : public Parent
{
public:
    string son2;
    Child2()
    {
        cout << "Enter the Child name : ";
        cin >> son2;
    }
    void print()
    {
        cout << "\n\nThe father name is : " << father_name << endl;
        cout << "The Mother name is : " << mother_name << endl;
        cout << "The Son name is : " << son2 << endl;
    }
};

int main()
{

    // Creating the obj;
    Child1 lokesh;
    lokesh.print();

    Child2 amit;
    amit.print();

    return 0;
}