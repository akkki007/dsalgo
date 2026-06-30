#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Enter the number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements (values between 0 and 12): ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    // precompute
    int hash[1000000] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1; // for [1,2,3,2,1] 
    }

    cout << "Enter the number of queries: ";
    int q;
    cin >> q;
    while (q--)
    {
        cout << "Enter a number to query its frequency: ";
        int number;
        cin >> number;
        // fetch
        cout << "Frequency of " << number << " is: " << hash[number] << endl;
    }
}