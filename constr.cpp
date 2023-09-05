#include <bits/stdc++.h>
using namespace std;
// /*
// Intrduction of Constructor

// Constructor is a special member function of a class which is used to initialize the objects of its class.

// It is special because its name is the same as the class name.

// It is invoked whenever an object of its associated class is created.

// It is constructor’s responsibility to initialize the object of its class.

// It has no return type, not even void.
// */

class Student
{

    int roll;
    string name;
    int sem;
    int total_marks;

public:
    Student(){
        cout<<"Default Constructor Called"<<endl;
    }

    Student(int a,int b,int c){
        cout<<"The sum of Given Number is : "<<a+b+c<<endl;
    }
    Student(int roll1, string name1, int sem1, int total_m)
    {
        roll = roll1;
        name = name1;
        sem = sem1;
        total_marks = total_m;
    }
    void get_data()
    {
        cout << "Roll no. : " << roll << endl;
        cout << "Name : " << name << endl;
        cout << "Semester : " << sem << endl;
        cout << "Total Marks : " << total_marks << endl;
    }

    ~Student(){
        cout<<"Destructor is called\n";
    }
};
int main()
{
    // Printing by Normal Method
    Student s1;
    // s1.set_data(1, "Yash", 3, 100);
    // s1.get_data();

    // Printing with the help of Constructor
    Student s2(1, "Yash", 3, 100);
    // s1.set_data(1, "Yash", 3, 100);
    s2.get_data();

    return 0;
}

// E:\Programming\CODING 2.0\C++\constr.cpp