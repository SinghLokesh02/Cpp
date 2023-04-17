/*
Dynamic memory allocation in C/C++ refers to performing memory allocation manually by a programmer. Dynamically allocated memory is allocated on Heap, and non-static and local variables get memory allocated on Stack (Refer to Memory Layout C Programs for details).

What are applications?

One use of dynamically allocated memory is to allocate memory of variable size, which is not possible with compiler allocated memory except for variable-length arrays.
The most important use is the flexibility provided to programmers. We are free to allocate and deallocate memory whenever we need it and whenever we don’t need it anymore. There are many cases where this flexibility helps. Examples of such cases are Linked List, Tree, etc.
How is it different from memory allocated to normal variables?

For normal variables like “int a”, “char str[10]”, etc, memory is automatically allocated and deallocated. For dynamically allocated memory like “int *p = new int[10]”, it is the programmer’s responsibility to deallocate memory when no longer needed. If the programmer doesn’t deallocate memory, it causes a memory leak (memory is not deallocated until the program terminates).
How is memory allocated/deallocated in C++?
C uses the malloc() and calloc() function to allocate memory dynamically at run time and uses a free() function to free dynamically allocated memory. C++ supports these functions and also has two operators new and delete, that perform the task of allocating and freeing the memory in a better and easier way.

new operator
The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.

Syntax to use new operator

pointer-variable = new data-type;
Here, the pointer variable is the pointer of type data-type. Data type could be any built-in data type including array or any user-defined data type including structure and class.
Example:

// Pointer initialized with NULL
// Then request memory for the variable
int *p = NULL;
p = new int;

            OR

// Combine declaration of pointer
// and their assignment
int *p = new int;

Initialize memory: We can also initialize the memory for built-in data types using a new operator. For custom data types, a constructor is required (with the data type as input) for initializing the value. Here’s an example of the initialization of both data types :

pointer-variable = new data-type(value);


Allocate a block of memory: a new operator is also used to allocate a block(an array) of memory of type data type.

pointer-variable = new data-type[size];
*/

// Example of Dynamic memory allocation
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int;
    *a = 10;
    cout << *a << endl;
    cout<<sizeof(a)<<endl;
    return 0;
}

// Dynamically allocting block of memory

// This array has size of 4 bytes

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of Array\n";
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of element " << i + 1 << "\n";
        cin >> a[i];
    }
    cout << "The Array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "The size of array is : " << sizeof(a) << endl;
    // Going to free the memory of Array
    delete[] a;
    cout << "The size of array is : " << sizeof(a) << endl;

    return 0;
}




// This static size array has size of : 4*number of elements in the array
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<sizeof(a)<<endl;
    return 0;
}
*/