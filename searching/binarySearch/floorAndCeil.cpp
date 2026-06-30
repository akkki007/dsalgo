/*
PS : Floor and ceil value in an array

arr = [3,4,6,7,1,9], k = 5

1. The floor of k : The largest number in arr that is less than or equal to k
2. The ceiling of k : The smallest number in arr that is greater than or equal to k

floor for above arr : 6
ceil : 4

if either floor or the ceiling does not exist, return -1

solution to be O(log (N))
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    pair<int, int> findFloorCeil(const vector<int> &arr, int k)
    {
        // intialize the variables
        int n = arr.size();
        int floor = -1, ceil = -1;

        int low = 0, high = n - 1;
        // binary search for floor
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == k)
            {
                floor = arr[mid];
                ceil = arr[mid];
                return {floor, ceil};
            }
            else if (arr[mid] < k)
            {
                floor = arr[mid];
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        // binary search for floor
        low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (high + low) / 2;
            if (arr[mid] >= k)
            // so as we are looking for smallest greater value if
            // the mid value is greater than k so we'll know in which
            // part to search
            {
                // left part
                ceil = arr[mid];
                high = mid - 1;
            }
            else
            {
                // right
                low = mid + 1;
            }
        }
        return { floor, ceil };
    }
};