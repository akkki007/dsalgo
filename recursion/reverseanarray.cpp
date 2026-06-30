#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void reverseAnArray(int l, int r, int arr[])
{
    if (l >= r)
        return;
    swap(arr[l], arr[r]);
    reverseAnArray(l + 1, r - 1, arr);
}

int main()
{

    int arr[] = {3, 4, 5, 6, 7};
    int l = 0;
    int r = sizeof(arr) / sizeof(arr[0]) - 1;
    reverseAnArray(l, r, arr);
    for (int i = 0; i <= r; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}