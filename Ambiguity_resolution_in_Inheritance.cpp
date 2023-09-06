#include <bits/stdc++.h>
using namespace std;

class one
{
public:
    void greet()
    {
        cout << "Hey I am a greet function of one class" << endl;
    }
};

class two
{
public:
    void greet()
    {
        cout << "Hey I am a greet function of two class" << endl;
    }
};

class three : public one, public two
{
    public:
    void Hello()
    {
        cout << "hello Everyone I hope you all are good" << endl;
    }

    void greet(){
        one::greet();
    }
};
int main()
{
    three t;
    // t.greet(); // this will show -> "three::greet" is ambiguous to 


    t.Hello();
    t.greet();


    return 0;
}