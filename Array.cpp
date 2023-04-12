/*
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:

int arr[0]
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Initialization of array;
    // int arr[size];

    /*

    Assigning the value in array
    arr[0] = 1
    arr[1] = 2;
    arr[2] = 3;


    Updating array elements Value 
    arr[0] = 3; this given value override the previous value of the array element
    arr[1] = 1;

    Accessing the value of array
    cout<<arr[0];
    cout<<arr[1];


    * get Array size 
     Ex :- int arr = [1,2,3,4,5]
     int size = sizeof(arr)/sizeof(int)

    */

    // Here we are going take Input from User
    int n;
    cout << "Enter the size of Array\n";
    cin >> n;

    // Assigning the value to array

    // Here we are going to use loop for assigning and accessing the value of an array elements
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i + 1 << " element: ";
        cin >> arr[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "The value of " << i + 1 << " element is : " << arr[i] << endl;
    }

    // Sorting of Array can be done using sort

    sort(arr, arr + n);

    return 0;
}