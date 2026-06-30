#include <bits/stdc++.h>
using namespace std;
/*
 Minimum time to complete trips

 Given :
 1. Time array when the ith buses arrive time = [1,2,3]
 2. TotalTrips : it denotes the number of trips the buses should complete

 To return : the minimum time in which the totalTrips can be completed

 Initial intuition :
 - Use binary search to get the time complexity to O(log N)
 - Each bus can do
    For any time T : T / time[i]
 For example : T = 3
    3 / 1 = 3;
    3 / 2 = 1;
    3 / 3 = 1;

 Total trips : 3 + 1 + 1 = 5 trips

*/

bool feasible(long long mid, int totalTrips, vector<int> time)
{
    long long actual_trips = 0;

    for (int t : time)
    {
        actual_trips += mid / t;
        if (actual_trips > totalTrips)
            return true;
    }

    return actual_trips >= totalTrips;
}

long long minimumTime(vector<int> &time, int totalTrips)
{
    long long low = *min_element(time.begin(), time.end());
    long long high = low * totalTrips;

    while (low < high)
    {
        long long mid = low + (high - low) / 2;
        if (feasible(mid, totalTrips, time))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}


int main(){
    vector<int> time = {1,2,3};
    int totalTrips = 5;

    cout << minimumTime(time,totalTrips) << endl;
}