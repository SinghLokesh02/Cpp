/*
Escape Sequence Introduction

The escape sequence in C/c++ is the characters or the sequence of characters that can be used inside the string literal. The purpose of the escape sequence is to represent the characters that cannot be used normally using the keyboard. Some escape sequence characters are the part of ASCII charset but some are not.

Different escape sequences represent different characters but the output is dependent on the compiler you are using.

Escape Sequence List
The table below lists some common escape sequences in C language.


Escape         Sequence	Name	                   Description
\a		        Alarm or Beep                      It is used to generate a bell sound in the C program.
\b	            Backspace	                       It is used to move the cursor backward.
\f	            Form Feed	                       It is used to move the cursor to the start of the next logical page.
\n	            New Line	                       It moves the cursor to the start of the next line.
\r	            Carriage Return	                   It moves the cursor to the start of the current line.
\t	            Horizontal Tab	                   It inserts some whitespace to the left of the cursor and moves the cursor accordingly.
\v	            Vertical Tab	                   It is used to insert vertical space.
\\	            Backlash	                       Use to insert backslash character.
\’	            Single Quote	                   It is used to display a single quotation mark.
\”	            Double Quote	                   It is used to display double quotation marks.
\?          	Question Mark	                   It is used to double quotation marks.
\ooo	        Octal Number	                   It is used to represent an octal number.
\xhh	        Hexadecimal Number	               It represents the hexadecimal number.
\0	            NULL	                           It represents the NLL character.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
cout<<"My Name is Lokesh\tsingh\n";
cout<<"Ths\bis\n";
// string str = "Lokesh Singh?";
string str = "\"Lokesh Singh\""; // print "Lokesh singh"

printf("This statement is used to check \r");

cout<<"\a"<<endl;
cout<<str<<endl;
    return 0;
}