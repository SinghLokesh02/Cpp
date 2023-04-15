/*
break statement: This statement terminates the smallest enclosing loop (i.e., while, do-while, for loop, or switch statement). Below is the program to illustrate the same:
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Printing 1 -10 Number \n";
    // Now we are going to illustrate use of break statement
    for (int i = 1; i < 10; i++)
    {
        cout << i << " ";
        if (i == 5)
            break;
    }

    return 0;
}

//  n = 10;
//  output -> 1 2 3 4 5

/*
continue statement: This statement skips the rest of the loop statement and starts the next iteration of the loop to take place. Below is the program to illustrate the same:
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Printing 1 -10 Number \n";
    // Now we are going to illustrate use of break statement
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
            continue;
        cout << i << " ";
    }

    return 0;
}

//  n = 10;
//  output -> 1 2 3 4 6 7 8 9 10


/**************** IMPORTANT *********************/
/*
In C and C++, exit() and break are two different keywords with distinct meanings.

exit() is a function that terminates the entire program and returns an exit code to the operating system. It is typically used to immediately stop the program execution and return control to the operating system. The exit code can be used by the calling process or system to determine whether the program terminated successfully or with an error.

break is a keyword used to break out of a loop or a switch statement. When used within a loop, it causes the program to immediately exit the loop and continue with the next statement outside the loop. When used within a switch statement, it exits the switch and continues with the next statement after the switch.

In summary, exit() is used to terminate the entire program, while break is used to break out of a loop or switch statement.

*/