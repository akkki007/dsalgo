#include <bits/stdc++.h>
using namespace std;

// we are reversing the array using the two pointer approach

void reverseArray(int arr[], int sz)
{
    int start = 0, end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    // printing the reversed array
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {10, 3, 4, 5, 6};
    int sz = 5;
    reverseArray(arr, sz);
}