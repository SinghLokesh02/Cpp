/*
The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function.

Need of Recursion

Recursion is an amazing technique with the help of which we can reduce the length of our code and make it easier to read and write. It has certain advantages over the iteration technique which will be discussed later. A task that can be defined with its similar subtask, recursion is one of the best solutions for it. For example; The Factorial of a number.
*/
#include <iostream>
#include <algorithm>
using namespace std;

// Recursive factorial of a number
int factorial(int n)
{
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

// Recursive function to check power of two
int power_of_two(int n)
{
    if (n == 0)
        return 1;
    return 2 * power_of_two(n - 1);
}

void print(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    print(n - 1);
}

// Check Palindrome
bool checkpalin(string s, int start, int end)
{
    if(start==end || end-start==1)return 1;
    if(s[start]==s[end]){
        return checkpalin(s,start+1,end-1);
    }
    return 0;
}

void reverse(int *arr,int i,int j){
    if(i<=j){
        swap(arr[i],arr[j]);
        reverse(arr,i++,j--);
    }
}
int main()
{
    // int n;
    // cout << "Enter any Number \n";
    // cin >> n;

    // cout<<factorial(n);

    // cout<<power_of_two(n)<<endl;

    // Print upto 0 from that number

    // Check if a number is Palindrome
    // Program for length of a string using recursion
    // print(n);

    string s = "abc";
    cout<<checkpalin(s,0,2);

    // Reverse array using recursion
    int arr[] = {1,2,3,4,5,6,7};
    reverse(arr,0,6);

    for(int i = 0;i<7;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}