#include<bits/stdc++.h>
using namespace std;
class student{
public:
int marks;
string name;
void print(){
    cout<<"The name of student is : "<<name<<endl;
    cout<<"The marks of student is : "<<marks<<endl;
}
};
int main()
{
    // class_name obj_name;
    student sarvesh;
    sarvesh.marks = 1000;
    sarvesh.name = "Sarvesh";
    sarvesh.print(); 

    student lokesh;
    lokesh.marks = 200;
    lokesh.name = "Lokesh";
    lokesh.print();

    student rahmat;
    rahmat.marks = 200;
    rahmat.name = "rahmat";
    rahmat.print();

    student sanjay;
    sanjay.marks = 200;
    sanjay.name = "sanjay";
    sanjay.print();

return 0;
}