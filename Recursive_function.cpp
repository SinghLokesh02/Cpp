/*
Recursion Introduction

Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.

Recursion Example

Adding two numbers together is easy to do, but adding a range of numbers is more complicated. In the following example, recursion is used to add a range of numbers together by breaking it down into the simple task of adding two numbers:
*/

// 1. Program of Sum upto N

#include <bits/stdc++.h>
using namespace std;
int sum_upto_n(int n){
    if(n<=1)return n;
    return n+sum_upto_n(n-1);
}
int main()
{
    int n;
    cout << "\nEnter the value of N : ";
    cin >> n;
    cout<<"The result of sum upto N number is : "<<sum_upto_n(n)<<endl;
    return 0;
}

// 2. Program to print factorial of given Number

#include <bits/stdc++.h>
using namespace std;
int Factorial(int n){
    if(n<=1)return 1;
    return n*Factorial(n-1);
}
int main()
{
    int n;
    cout << "\nEnter the value of N : ";
    cin >> n;
    cout<<"The Factorial of Given number is : "<<Factorial(n)<<endl;
    return 0;
}

// 3. Program to print upto given Number
#include <bits/stdc++.h>
using namespace std;

void print_upto_N(int n){
     if(n<1)return;
     print_upto_N(n-1);
     cout<<n<<" ";  
}

int main()
{
    int n;
    cout << "\nEnter the value of N you want to print : ";
    cin >> n;
    print_upto_N(n);
    return 0;
}

// 4. Program to print given Number to  0

#include <bits/stdc++.h>
using namespace std;

void print_upto_N(int n){
     if(n<0)return;
     cout<<n<<" ";  
     print_upto_N(n-1);
}

int main()
{
    int n;
    cout << "\nEnter the value of N you want to print : ";
    cin >> n;
    print_upto_N(n);
    return 0;
}

// 5. Recursive function to reverse the given string

#include <bits/stdc++.h>
using namespace std;

void reverse_str(string &str,int s,int e){
      if(str.size()<=1)return;
      if(s>e)return;
      swap(str[s],str[e]);
      reverse_str(str,s+1,e-1);    
}

int main()
{
    string n;
    cout << "\nEnter any random string : ";
    getline(cin,n);
    cout<<n<<endl;
    reverse_str(n,0,n.size()-1);
    cout<<n<<endl;
    return 0;
}


 