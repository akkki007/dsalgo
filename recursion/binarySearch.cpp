#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int tg, int start, int end)
{
    int mid = start + (end - start) / 2;
    if (arr[mid] > tg)
    {
        binarySearch(arr, tg, start, mid - 1);
    }
    else if (arr[mid] < tg)
    {
        binarySearch(arr, tg, mid + 1, end);
    }
    else
    {
        return mid;
    }
    return -1;
}

int main()
{

    vector<int> arr = {-1, 2, 3, 4, 23, 45, 69, 73, 3};
    int target = 69;
    int index = binarySearch(arr, target, 0, 9);
    if (index >= 0)
    {
        cout << "Element found on index : " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}