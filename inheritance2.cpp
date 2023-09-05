#include <bits/stdc++.h>
using namespace std;
/*
class  <derived_class_name> : <access-specifier> <base_class_name>
{
        //body
}
*/
//  Single Inheritance
// Base Class
class Parent
{
public:
int a;
int b;
    void get_data()
    {
        cout<<"Enter the value of a and b\n";
        cin>>a>>b;
    }
    void show_data()
    {
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }
};


// Derived Class

//  In Inheritance
/*
If you are Inheriting publicly
-> public member are public
-> protected member private
-> private member can never be Inherited


If you are Inheriting protected way
-> public member are public
-> protected member private
-> private member can never be Inherited



*/
class Child : public Parent{
    public:
    void sum(){
        cout<<"The sum of a and b is : "<<a+b<<endl;
    }
};



int main()
{
    Child c1;
    c1.get_data();
    c1.show_data();
    c1.sum();
    cout<<c1.a<<endl;
    return 0;
}