#include <bits/stdc++.h>
using namespace std;

// this file is to demonstrate how vector works
// vector is a dynamic array that can adjust with any no of elements by elongating its actual capacity

int main()
{

    // initializing the vector
    vector<int> v;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i); // push_back(elm) => is used to insert an element into the vector from the end
    }

    cout << "We'll now see how we can iterate over the vectors by displaying each and every element" << endl;
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " "; 

    cout << "\nThe front element of the vector: " << v.front();             // The front element of the vector
    cout << "\nThe last element of the vector: " << v.back();               // The last element of the vector
    cout << "\nThe size of the vector: " << v.size();                       // The size of the vector
    cout << "\nDeleting element from the end: " << v[v.size() - 1] << endl; // Deleting element from the end
    v.pop_back();                                                           // it will pop the first element from the end

    // now we'll insert at specific position
    v.insert(v.begin(), 2);

    cout << " the first elem in the vector is " << v[0] << endl;
}