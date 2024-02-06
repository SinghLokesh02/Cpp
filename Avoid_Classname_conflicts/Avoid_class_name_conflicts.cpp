#include <bits/stdc++.h>
using namespace std;

// Creating a namespace to avoid class name conflicts

namespace my_namespace1
{
    class Student
    {
    public:
        string name;
        int age;
        Student(string name, int age)
        {
            this->name = name;
            this->age = age;
        }

        void display()
        {
            cout << "Name: " << name << "\nAge: " << age << endl;
        }
    };
}

// Creating another namespace to avoid class name conflicts
namespace my_namespace2
{
    class Student
    {
    public:
        string name;
        int age;
        int roll;
        Student(string name, int age, int roll)
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
}
int main()
{
    // Creating object of Student class from my_namespace1
    cout << "Student 1 Details: " << endl;
    my_namespace1::Student s1("John", 25);
    s1.display();

    // Creating object of Student class from my_namespace2
    cout << "\nStudent 2 Details: " << endl;
    my_namespace2::Student s2("Ravi", 30, 25);
    s2.display();

    return 0;
}