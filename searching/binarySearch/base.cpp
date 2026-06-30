#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int tg)
{
    int st = 0;
    int end = arr.size() - 1;
    int n = end + 1;
    int lb = lower_bound(arr.begin(),arr.end(),n) - arr.begin();
    cout << lb << endl;
    // while (st <= end)
    // {
    //     int mid = st + (end - st) / 2;
    //     /*
    //     Now a case where st = INT_MAX and end = INT_MAX  happens, so we cannot logically add both values so we have to use
    //     alternate formula for calculating the mid value i.e
    //     mid = (st) + ((end - st) / 2)
    //     */
    //     if (tg > arr[mid])
    //     {
    //         st = mid + 1;
    //     }
    //     else if (tg < arr[mid])
    //     {
    //         end = mid - 1;
    //     }
    //     else
    //     {
    //         return mid; 
    //     }
    // }
    return -1;
}

int main()
{

    vector<int> arr = {-1, 2, 3, 4, 23, 45, 69,73, 3};
    int target = 69;
    int index = binarySearch(arr, target);
    cout << index << endl;
    if(index>=0){
        cout << "Element found on index : " << index << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
}