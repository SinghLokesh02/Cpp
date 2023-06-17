/*
Introduction of Constructor in CPP
Constructor is a special member function of a class that is executed whenever we create new objects of that class.
A constructor will have exact same name as the class and it does not have any return type at all, not even void. Constructors can be very useful for setting initial values for certain member variables.
Following example explains the concept of constructor:
*/

#include <bits/stdc++.h>
using namespace std;
class student
{
    string name;
    int total_marks;

public:
    student(string n, int m)// parameterized Contructor
    {
        name = n;
        total_marks = m;
    }
    void display()
    {
        cout << "The Name Of Student is : " << name << endl;
        cout << "Total Marks Of Student is: " << total_marks << endl;
    }
};
int main()
{
    // Before Constructor
    //  student s1;
    //  s1.set("lokesh",100);
    //  s1.display();

    // After Constructor
      student s1("lokesh",100);
     s1.display();
      
    return 0;
}