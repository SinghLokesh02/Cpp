// Method 1: Using copy() and back_inserter() functions

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    // Some random vectors
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {6, 7, 8,};
    vector<int> v3 = {11, 12};

    // Now we create a list of vectors
    list<int>l;
    copy(v1.begin(), v1.end(), back_inserter(l));
    copy(v2.begin(), v2.end(), back_inserter(l));
    copy(v3.begin(), v3.end(), back_inserter(l));

    // Print the list
    cout<<"The Combined List is "<<endl;
    for (auto i : l)
        cout << i << " ";
    cout << endl;

    return 0;
}



// Method 2: Using Loops and Iterators

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    // Some random vectors
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {6, 7, 8,};
    vector<int> v3 = {11, 12};

    // Now we create a list of vectors
    list<int> l;

    // Using loop and iterating through the vectors and inserting the elements in the list

    // Inserting vector 1 items
    for (auto i : v1)
        l.push_back(i);

    // Inserting vector 2 items
    for (auto i : v2)
        l.push_back(i);
    
    // Inserting vector 2 items
    for (auto i : v3)
        l.push_back(i);

    // Print the list
    cout<<"The Combined List is "<<endl;
    for (auto i : l)
        cout << i << " ";
    cout << endl;
    return 0;
}


// Method - 3 : Using insert() function
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    // Some random vectors
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {6, 7, 8,};
    vector<int> v3 = {11, 12};

    // Now we create a list of vectors
    list<int> l;
    l.insert(l.end(), v1.begin(), v1.end());
    l.insert(l.end(), v2.begin(), v2.end());
    l.insert(l.end(), v3.begin(), v3.end());

    // Print the list
    cout<<"The Combined List is "<<endl;
    for (auto i : l)
        cout << i << " ";
    cout << endl;
    return 0;
}