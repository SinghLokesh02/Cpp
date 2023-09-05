#include <bits/stdc++.h>
using namespace std;

//  Creating a class

/*
Destructor 

It is Just Opposite to Constructor with (~).

It is automatically Invoked when object goes out of scope.

It has No return Type

*/
class Employee
{
    string name;
    int id;
    int salary;

public:
    Employee()
    {
        cout << "This is a default constructor" << endl;
    }

    Employee(int id, int salary, string name)
    {
        this->name = name;
        this->salary = salary;
        this->id = id;
    }

    void get_data()
    {
        cout << "The name is : " << name << endl;
        cout << "The Id is : " << id << endl;
        cout << "The Salary is : " << salary << endl;
    }

    ~Employee(){
        cout<<"I'm a Destructor and now I'm called\n";
    }
};

// Main Function -> Code Execution Starts here
int main()
{
    // Creating Obj
    // Class_name obj_name
    Employee e1(12, 10000, "Yash");
    e1.get_data();

    Employee e2;
    Employee e3;

    return 0;
}