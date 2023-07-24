#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    int marks;
    string name;
    student()
    {
        cout << "The name of student is : ";
        cin >> name;
        cout << "The marks of student is : ";
        cin >> marks;
    }
    // void set_data()
    // {
    //     cout << "The name of student is : ";
    //     cin>>name;
    //     cout << "The marks of student is : ";
    //     cin>>marks;
    // }
};

class result : public student
{
public:
    void print()
    {
        cout << "\n\nThe name of student is : " << name << endl;
        cout << "The marks of student is : " << marks << endl;
    }
};
int main()
{
    // getting data using Constructor
    result lokesh;
    lokesh.print();

    // Getting data with the help of methods
    // result lokesh;
    // lokesh.set_data();
    // lokesh.print();
    return 0;
}