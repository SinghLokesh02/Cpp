// #include <bits/stdc++.h>
// using namespace std;

// // Base class - 1
// class parent1
// {
// public:
//     int num = 10;
//     string name = "Lokesh";

// };

// // Base Class - 2
// class parent2
// {
// public:
//     int num1, num2;

// public:
//     void get_data()
//     {
//         cout << "Enter the value of Num1 and Num2 " << endl;
//         cin >> num1 >> num2;
//     }

//     void show_data()
//     {
//         cout << "The Number1 is : " << num1 << endl;
//         cout << "The Number2 is : " << num2 << endl;
//     }
// };

// // Child/Derived/Sub class

// class Child1 : public parent1, public parent2
// {
//     public:
//     void sumParent2()
//     {
//         cout << "The sum of 2 Numbers of Parent2 class is : " << num1 + num2 << endl;
//     }
//       void print_data()
//     {
//         cout << "The name is : " << name << endl;
//         cout << "The number is : " << num << endl;
//     }
// };

// int main()
// {
//     Child1 c1;
//     c1.print_data();

//     c1.get_data();
//     c1.show_data();

//     c1.sumParent2();
//     return 0;
// }

//  Multilevel Inheritance

// #include <bits/stdc++.h>
// using namespace std;
// class Baba
// {
//     protected:
//     int rupya1 = 1000;
//     int rupya2 = 10000;
    
//     Baba(){
//         cout<<"I'm the constructor of papa's papa class\n";
//     }
// };

// class Papa : protected Baba
// {
//     public: 
//     int dollar = 5000;
//     Papa(){
//         cout<<"I'm the constructor of papa class\n";
//     }
// };

// class hum : public Papa
// {
//     public:
//     hum(){
//         cout<<"My baba has "<<rupya1<<" "<<rupya2<<" as his salary"<<endl;
//         cout<<"My papa's salary in dollar is : "<<dollar<<endl;
//     }
// };
// int main()
// {

//     hum h1;

//     return 0;
// }



// Hierarchical Inheritance
#include <bits/stdc++.h>
using namespace std;

// Parent class
class Baba
{
    protected:
    int rupya1 = 1000;
    int rupya2 = 10000;
    
};

//  Child - 1
class Papa : protected Baba
{
    public: 
    int dollar = 5000;
    Papa(){
        cout<<"I'm the constructor of papa class\n";
    }

    void show_data(){
        cout<<"My baba has "<<rupya1<<" "<<rupya2<<" as his salary"<<endl;
        cout<<"My salary in dollars is : "<<dollar<<endl;
    }
};

// Child 2
class hum : public Baba
{
    public:
    hum(){
        cout<<"My baba has "<<rupya1<<" "<<rupya2<<" as his salary"<<endl;
    }
};

// Main Class
int main()
{
    // Child1 Object
    hum h1;

    // Child2 Object
    Papa p;
    p.show_data();

    return 0;
}