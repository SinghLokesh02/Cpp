#include <bits/stdc++.h>
using namespace std;

// Hybrid Inheritance
class A
{
public:
    int a;
    A()
    {
        cout << "Enter the value of A : ";
        cin >> a;
    }
};
class B
{
public:
    int b;
    B()
    {
        cout << "Enter the value of B : ";
        cin >> b;
    }
};
class C : public A, public B
{
public:
    C()
    {
        cout << "The sum of two number : " << a + b << endl;
    }
};
class D : public C
{
public:
    D()
    {
        cout << "Hello this is Hybrid Inheritance\n";
    }
};

int main()
{
    D d;
    return 0;
}