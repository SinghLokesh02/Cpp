/*
Introduction of Operators
Operators are symbols that perform operations on variables and values. For example, + is an operator used for addition, while - is an operator used for subtraction.

Operators in C++ can be classified into 6 types:

Arithmetic Operators
Assignment Operators
Relational Operators
Logical Operators
Bitwise Operators
Other Operators

1. C++ Arithmetic Operators
Arithmetic operators are used to perform arithmetic operations on variables and data. For example,
a + b;
Here, the + operator is used to add two variables a and b. Similarly there are various other arithmetic operators in C++.

Operator	Operation
+	Addition
-	Subtraction
*	Multiplication
/	Division
%	Modulo Operation (Remainder after division)

#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 7;
    b = 2;

    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;

    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;

    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;

    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;

    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;

    return 0;
}

*/

/*
2. C++ Assignment Operators

Here, we have assigned a value of 5 to the variable a.

Operator	Example	Equivalent to
=	a = b;	a = b;
+=	a += b;	a = a + b;
-=	a -= b;	a = a - b;
*=	a *= b;	a = a * b;
/=	a /= b;	a = a / b;
%=	a %= b;	a = a % b;

#include <iostream> // Program
using namespace std;

int main() {
    int a, b;

    // 2 is assigned to a
    a = 2;

    // 7 is assigned to b
    b = 7;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a +b
    cout << "a = " << a << endl;

    return 0;
}

*/

/*
3. C++ Relational Operators
A relational operator is used to check the relationship between two operands. For example,

// checks if a is greater than b
a > b;
Here, > is a relational operator. It checks if a is greater than b or not.

If the relation is true, it returns 1 whereas if the relation is false, it returns 0.


Operator	    Meaning	                        Example
==	            Is Equal To	                    3 == 5 gives us false
!=	            Not Equal To	                3 != 5 gives us true
>	            Greater Than	                3 > 5 gives us false
<	            Less Than	                    3 < 5 gives us true
>=	            Greater Than or Equal To	    3 >= 5 give us false
<=	            Less Than or Equal To	        3 <= 5 gives us true

Example 4: Relational Operators
#include <iostream>
using namespace std;

int main() {
    int a, b;
    a = 3;
    b = 5;
    bool result;

    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;

    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;

    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;

    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;

    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;

    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;

    return 0;
}

4. C++ Logical Operators

Logical operators are used to check whether an expression is true or false. If the expression is true, it returns 1 whereas if the expression is false, it returns 0.

Operator	      Example	              Meaning
&&	      expression1 && expression2	  Logical AND.
                                          True only if all the operands are true.
||	      expression1 || expression2	  Logical OR.
                                          True if at least one of the operands is true.
!	      !expression	                  Logical NOT.
                                          True only if the operand is false.

#include <iostream>
using namespace std;

int main() {
    bool result;

    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;

    return 0;
}
*/

/*
5. C++ Bitwise Operators
In C++, bitwise operators are used to perform operations on individual bits. They can only be used alongside char and int data types.

Operator	Description
&	        Binary AND
|	        Binary OR
^	        Binary XOR
~	        Binary One's Complement
<<	        Binary Shift Left
>>	        Binary Shift Right

*/