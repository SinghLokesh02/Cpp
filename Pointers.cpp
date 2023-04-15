/*
C++ Pointers Introduction

Pointers are symbolic representations of addresses. They enable programs to simulate call-by-reference as well as to create and manipulate dynamic data structures. Iterating over elements in arrays or other data structures is one of the main use of pointers.

The address of the variable you’re working with is assigned to the pointer variable that points to the same data type (such as an int or string).

Syntax:

datatype *var_name;
int *ptr;   // ptr can point to an address which holds int data

How to use a pointer?

Define a pointer variable
Assigning the address of a variable to a pointer using the unary operator (&) which returns the address of that variable.
Accessing the value stored in the address using unary operator (*) which returns the value of the variable located at the address specified by its operand.

Pointers in C: A One-Stop Solution for Using C Pointers
By Ravikiran A S
Last updated on Feb 24, 202362309
A One-Stop Solution for Using Pointers in C
Table of Contents
What Are Pointers in C?In How Many Ways Can You Access Variables?What Are the Different Types of Pointers?What Are the Use Cases of Pointers in C?What Are the Advantages of Pointers in C?View More
Pointers are like special utilities used by web developers to make it easy to map around in a program code. Unlike other variables, pointers store THE addresses of other variables.

What Are Pointers in C?
A pointer is a variable pointing to the address of another variable. It is declared along with an asterisk symbol (*). The syntax to declare a pointer is as follows:

        datatype *var1

The syntax to assign the address of a variable to a pointer is:

        datatype var1, *var2;

var2=&var1;

pointers_in_c-what-are-pointers-img1

In How Many Ways Can You Access Variables?
You can access a variable in two ways.

Direct Access: You can directly use the variable name to access the variable.
Indirect Access: You use a pointer to access that variable.
pointers_in_c-variable-access-img2

Example:
#include<stdio.h>

int main()

{

  int a=5, *ptr;

  ptr=&a;

  printf(“Direct Access, a=%d\n”,a);

printf(“Indirect Access, a=%d\n”,*ptr);

  return 0;

}

pointers_in_c-variable-access-img2


*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 10;
    int *ptr = &num;
    int **ptr2 = &ptr;
    cout << "The value of num is : " << num << endl;
    // OR
    cout << "The value of num is : " << *ptr << endl;

    cout << "The address of num is : " << ptr << endl;
    cout << "The address of ptr is : " << ptr2 << endl;

    return 0;
}

/*
What Are the Different Types of Pointers?
There are majorly four types of pointers, they are:

1. Null Pointer

If you assign a NULL value to a pointer during its declaration, it is called Null Pointer.
Syntax:
Int *var = NULL;

2. Void Pointer

When a pointer is declared with a void keyword, then it is called a void pointer. To print the value of this pointer, you need to typecast it.
Syntax:
#include<stdio.h>
int main()
{
    int a=2;
    void *ptr;
    ptr= &a;
    printf("After Typecasting, a = %d", *(int *)ptr);
    return 0;
}

3. Wild Pointer

A wild pointer is only declared but not assigned an address of any variable. They are very tricky, and they may cause segmentation errors.

4. Dangling Pointer

Suppose there is a pointer p pointing at a variable at memory 1004. If you deallocate this memory, then this p is called a dangling pointer.
You can deallocate a memory using a free() function.
*/