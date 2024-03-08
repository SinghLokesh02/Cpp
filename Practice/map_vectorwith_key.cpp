#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Method 1 Using Multimap and a pair
    // multimap<int, vector<int>> m;

    // Insert the elements

    // m.insert({1, {1, 2, 3, 4}});
    // m.insert({2, {78, 56, 76, 87}});
    // m.insert({6, {25,58,16,6,41}});
    // m.insert({1, {23, 3, 45, 56, 1}}); // Another vector for key 1

    // Accessing the elements of Vector
    // for (const auto &pair : m)
    // {
    //     cout << "Key is : " << pair.first << ", Value is : ";
    //     for (auto i : pair.second)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // Method - 2 Using Map and vector
    map<int, vector<int>> myMap;

    // Syntax
    // map[key] = value;

    // Inserting Values in Map

    myMap[1] = {10, 20, 30};
    myMap[2] = {40, 50};
    myMap[1] = {60, 70}; // Another vector for key 1

    // Printing the values of map

    for(auto data : myMap){
        cout<<"Key is : "<<data.first<<", values is : ";
        for(auto i : data.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}