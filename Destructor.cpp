// Introduction to Destructor + Scope Resolution Operator

// Destructor is a special member function of a class that is executed whenever an object of it's class goes out of scope or whenever the delete expression is applied to a pointer to the object of that class.

// A destructor will have exact same name as the class prefixed with a tilde (~) and it can neither return a value nor can it take any parameters. Destructor can be very useful for releasing resources before coming out of the program like closing files, releasing memories etc.

// Following example explains the concept of destructor:

#include <bits/stdc++.h>
using namespace std;

int a = 100;

class student
{
    string name;
    int total_marks;

    // public :// Access Modifier
    // protected:
    private:
    
    void Just_check();
    student(string n, int m)
    {
        name = n;
        total_marks = m;
    }
    void display()
    {
        cout<<"The Name Of Student is : "<<name<<endl;
        cout<<"Total Marks Of Student is: "<<total_marks<<endl;
    }
    ~student()
    {
        cout<<"Destructor Called"<<endl;
    }
}; // Ending class

void student :: Just_check(){
cout<<"Now Here I am checking the functionality of scope resoultion Opertaor\n";
}
int main()
{
   
    // s1.Just_check(); // student s1("Lokesh Singh",90);
    // s1.display();

    int a = 10;
    // cout<<"The use of Scope Resolution Operator\n";
    // local variable take precedence over global variable
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of a is : "<<::a<<endl; // Global variable
   
    return 0;
}
