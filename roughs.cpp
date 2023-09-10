/*
Class -> It is a collection of data member and member Functions

Data Member -> Variables(Container to store values/data)
Ex - int a = 10;

Member Functions -> function(Group of code that perform specific task)

void add(int a,int b){
    cout<<a+b<<endl;
}


Object -> Real world Entity/ Copy of class

Encapsulation -> Class is an Example of encapsulation





#include <bits/stdc++.h>
using namespace std;

// class class_name{

// }

class IRCTC
{
    // data member
private:
    string name;
    int id;
    int salary;

public:
    // Setter
    void set_data(string name1, int id1, int salary1)
    {
        name = name1;
        id = id1;
        salary = salary1;
    }
    // Getter
    void get_data()
    {
        cout << "The name is : " << name << endl;
        cout << "The Id is : " << id << endl;
        cout << "The salary is : " << salary << endl;
    }
    void get_data1()
    {
        cout << "The name is : " << name << endl;
        cout << "The Id is : " << id << endl;
    }
};

// Main function
int main()
{

    // Creating Objects
    // Syntax
    // Class_name object_name;

    // Obj - 1
    IRCTC yash;
    yash.set_data("Yash", 69, 100000);
    yash.get_data();


    cout<<"The size of obj Yash : "<<sizeof(yash)<<endl;

    // Obj - 2
    IRCTC shubham;
    shubham.set_data("Shubham", 10, 50000);
    shubham.get_data();

    // Obj - 3
    IRCTC Adarsh;
    Adarsh.set_data("Adarsh", 10, 500000);
    Adarsh.get_data();

    // Obj - 4
    IRCTC lokesh;
    lokesh.set_data("Lokesh", 25, 20000);
    lokesh.get_data1();

    // Printing the values;
    // cout<<"\nPrinting the values of Yash\n\n";
    // yash.print_data();

    // IRCTC Adarsh;
    // Adarsh.name = "Adarsh";
    // Adarsh.id = 5;
    // Adarsh.salary = 100000;
    // Adarsh.print_data();

    // // Printing the values;
    // cout<<"\nPrinting the values of Adarsh\n\n";
    // cout<<Adarsh.name<<endl;
    // cout<<Adarsh.id<<endl;
    // cout<<Adarsh.salary<<endl;

    return 0;
}



// 09/09/2023

#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    int id = 78;
    string name = "Employee";
    int salary = 123331;
    // void set_data(int id, string name, int salary)
    // {
    //     this->name = name;
    //     this->id = id;
    //     this->salary = salary;
    // }

    void get_data()
    {
        cout << "The name is : " << name << endl;
        cout << "The id is : " << id << endl;
        cout << "The salary is : " << salary << endl;
    }
};

class Programmer
{
public:
    int id = 234567;
    string name = "Programmer";
    int salary = 100000;
    void get_data()
    {
        cout << "The name is : " << name << endl;
        cout << "The id is : " << id << endl;
        cout << "The salary is : " << salary << endl;
    }
};


class child : public Employee,public Programmer{
    public:
    void get_data(){
        Employee::get_data();
    }


};
int main()
{
    // Employee e1;


    child baccha;
    // baccha.Employee::get_data();

    baccha.get_data();

    return 0;
}

*/

//  Program to Illustrate Hybrid Inheritance

#include <bits/stdc++.h>
using namespace std;

// Base 1 Class
class A
{
public:
    int a = 10;
    // void set_data()
    // {
    //     cout << "Enter the value of A : ";
    //     cin >> a;
    // }
    void get_data()
    {
        cout << "The value of A is : " << a << endl;
    }
};

// Class Inherited from Class A
class B : public A
{
public:
    int b = 20;
    void get_data_B()
    {
        cout << "The value of b is : " << b << endl;
    }
};

//  Class C Inherited from B
class C : public B
{
public:
    int c = 2;
    void Sum()
    {
        cout << "The sum of a and b is : " << a + b << endl;
    }
};

// This Class is Inherited From Class C
class D : public C
{
public:
    void Add()
    {
        cout << "The sum of a + b + c is : " << a + b + c << endl;
        cout << "I'm Inherited from the C Class\n\n";
    }
};

// This Class is Inherited From Class C
class E : public C
{
public:
    void Product()
    {
        cout << "The sum of a * b * c is : " << a * b * c << endl;
        cout << "I'm Inherited from the C Class\n\n";
    }
};
int main()
{

    C c;
    c.get_data();
    c.get_data_B();

    c.Sum();

    // Creating Object of D class
    D d;
    d.Add();

    // Creating Object of E class
    E e;
    e.Product();
    return 0;
}