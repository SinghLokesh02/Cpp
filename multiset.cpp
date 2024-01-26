// Including required libraries
#include <iostream>
#include <set>
#include <vector>
#include <unordered_map>


using namespace std;
int main()
{
    // Unordered map
    unordered_map<int, int> umap;

    // Create a vector containing integers
    vector<int> myVector = {1, 2, 2, 6, 5, 6, 7, 3, 4, 4, 4, 1};

    // Create a multiset from a vector
    multiset<int> myMultiset(myVector.begin(), myVector.end());

    // print the elements

    for (const auto &element : myMultiset)
    {
        if (umap.find(element) == umap.end())
        {
            // Print the element and the frequency
            std::cout << element << " appears " << myMultiset.count(element) << " times\n";
            umap[element] = 1;
        }
    }
    return 0;
}