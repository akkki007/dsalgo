#include <bits/stdc++.h>
using namespace std;

// Code chef : https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int firstMax = INT_MIN;
        int secondMax = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            /*
            here we check for the first maximum of the array
            by just comparing with the each value of the array
            */
            if (a[i] > firstMax)
            {
                secondMax = firstMax;
                firstMax = a[i];
            }
            /*
            Here we are checking for the second maximum
            firstly we are checking if the value is greater than current
            secondMax and then we check if the value is similiar to that of the firstMax
            when we confirm , then assign value of a[i] to secondMax
            */
            else if (a[i] > secondMax && a[i] != firstMax)
            {
                secondMax = a[i];
            }
        }

        // here we are printing the sum of first largest and second largest

        int maxSum = firstMax + secondMax;
        cout << maxSum << endl;
    }
}
