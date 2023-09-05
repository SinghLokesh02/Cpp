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



*/

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