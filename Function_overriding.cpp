#include <bits/stdc++.h>
using namespace std;

// Function Overriding
class base
{
public:
    void print()
    {
        cout << "Hello this is base class\n";
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "I am over rided Function\n";
        cout << "Hello this is derived class\n";
    }
};
int main()
{
    derived derived_class;
    derived_class.print();

    return 0;
}