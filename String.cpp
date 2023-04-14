/*
Introduction to strings
Strings are used for storing text.

A string variable contains a collection of characters surrounded by double quotes:
Create a variable of type string and assign it a value:

string greeting = "Hello";
To use strings, you must include an additional header file in the source code, the <string> library:

String Concatenation
The + operator can be used between strings to add them together to make a new string. This is called concatenation:
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName;


Access Strings
You can access the characters in a string by referring to its index number inside square brackets [].

Change String Characters
To change the value of a specific character in a string, refer to the index number, and use single quotes:

Example
string myString = "Hello";
myString[0] = 'J';
cout << myString;
Outputs Jello instead of Hello

User Input Strings
It is possible to use the extraction operator >> on cin to display a string entered by a user:
string firstName;
cout << "Type your first name: ";
cin >> firstName;
*/

// Program to demonstrate the working of string

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "", first, last; // declaration of string
    string s1 = "Lokesh Singh"; // declaration and Initialization of string

    cout << s1[0] << endl; // This will print 'L' this means we are accessing the string character by [].
    cout << "Enter your first name : ";
    cin >> first;
    cout << "Enter your last name : ";
    cin >> last;
    cout << "your full name is : " << first + " " + last << endl; // Concatination of two string using + operator

    // string Functions;
    string add = "BSF Academy tekanpur";
    // 1) size/length function used to print size of string

    cout << "The size of string is : " << add.size() << endl;
    cout << "The size of string is : " << add.length() << endl;

    // Replace Function
    // Format :- str.replace(starting_index,number of character you want to replace,"String to replace")
    cout << add.replace(12, 8, "Gwalior") << endl;

    // Find Function
    int index = add.find("Gwalior"); // It return the Index of given string if it is present in the parent string and return "-1" if not found;
    cout << index << endl;

    // substr function -> copy the substring of pointed string
    // string.substr(starting index,number of char you want to copy)
    string new_string = add.substr(0, 3);
    cout << new_string << endl;

    /*
    other Functions
    resize() -> This function changes the size of the string, the size can be increased or decreased.

    append() -> add string after specified string

    shrink_to_fit() -> 	This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters has to be made.

    push_back() -> This function is used to input a character at the end of the string.

    pop_back() -> Introduced from C++11(for strings), this function is used to delete the last character from the string.

    capacity() -> This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated
    so that when the new characters are added to the string, the operations can be done efficiently.

    begin() -> 	This function returns an iterator to the beginning of the string

    end() -> This function returns an iterator to the next to the end of the string.

    rbegin() -> This function returns a reverse iterator pointing at the end of the string.

    rend() -> This function returns a reverse iterator pointing to the previous of beginning of the string.

    swap() -> This function swaps one string with another
    */

    return 0;
}