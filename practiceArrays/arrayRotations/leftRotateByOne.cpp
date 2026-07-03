#include <bits/stdc++.h>
using namespace std;

// base approach: swap elem i with i-1, store first element into temp and place it at the end once the iteration reaches n
// already O(n), so there is no separate optimized version for a left-rotate-by-one shift
vector<int> leftRotateByOneBase(vector<int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
    }
    arr[n - 1] = temp;

    return arr;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    vector<int> res = leftRotateByOneBase(nums, nums.size());
    for (int num : res)
    {
        cout << num << " ";
    }
}
