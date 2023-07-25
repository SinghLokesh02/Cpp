// #include <bits/stdc++.h>
// using namespace std;

// // Function Overriding
// class Base
// {
// public:
//     void print()
//     {
//         cout << "I'm a base class function\n";
//     }
// };
// class derived : public Base
// {
// public:
//     void print()
//     {
//         cout << "I'm a derived class function\n";
//     }
// };

// int main()
// {
//     derived obj;
//     obj.print();

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// // Multiple Inheritance -> More than one base class
// // class Base1
// class parent1
// {
// public:
//     int a;
//     parent1()
//     {
//         cout << "Enter the value of a : " << endl;
//         cin >> a;
//     }
// };
// class parent2
// {
// public:
//     int b;
//     void b_set_data()
//     {
//         cout << "Enter the value of b : " << endl;
//         cin >> b;
//     }
// };
// class Child : private parent1, public parent2
// {
// public:
//     void display()
//     {
//         cout << "The value of a is : " << a << endl;
//         cout << "The value of b is : " << b << endl;
//         cout << "The sum of a and b is : " << a + b << endl;
//     }
// };

// int main()
// {
//     Child obj;
//     obj.b_set_data();
//     obj.display();
//     return 0;
// }

/*Hierarchical Inheriatance -> more than one child class
#include <bits/stdc++.h>
using namespace std;

// Class Parent
class Parent
{
public:
    string father_name = "father";
};

// Class Child1
class child1 : public Parent
{
public:
    string child1_name = "child1";
    void get_data()
    {
        cout << "My father name is : " << father_name<<endl;
        cout << "My name is : " << child1_name << endl;
    }
};
// Class Child2
class child2 : public Parent
{
public:
    string child2_name = "child2";
    void get_data()
    {
        cout << "My father name is : " << father_name << endl;
        cout << "My name is : " << child2_name << endl;
    }
};

int main()
{
    child1 obj1;
    child2 obj2;
    obj1.get_data();
    obj2.get_data();
    return 0;
}*/
