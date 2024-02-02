#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // Creating a Vector of 20 size
    vector<int> v(20);

    // Inserting elements in the vector
    v = {1, 2, 3, 4, 5, 5};

    // Display the current size and capacity of vector
    cout << "Capacity: " << v.capacity() << endl; 

    // Reducing the capacity of vector 
    v.shrink_to_fit();

    // Display the updated size and capacity of vector
    cout << "Capacity: " << v.capacity() << endl; 

    return 0;
}