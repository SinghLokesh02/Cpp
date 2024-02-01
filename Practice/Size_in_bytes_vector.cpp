#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // Size of Each Element
    size_t size = sizeof(v[0]);
    cout << "Size of Each Element: " << size << endl;

    // Size of Vector
    size_t size_of_vector = v.size();

    // Size of Vector in Bytes
    size_t size_In_Bytes = size * size_of_vector;
    cout << "Size of Vector in bytes : " << size_In_Bytes << "bytes" << endl;

    return 0;
}