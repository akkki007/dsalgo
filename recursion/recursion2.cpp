#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find sum of first N natural numbers using formula
    int sumOfNaturalNumbers(int N)
    {
        // Apply formula directly
        return (N * (N + 1)) / 2;
    }
    int factorial(int n)
    {
        if (n == 0)
            return 1;

        return n * factorial(n - 1);
    }
};

// Driver code
int main()
{
    Solution obj;
    int N;
    cin >> N;
    cout << "sum of " << N << " " << obj.sumOfNaturalNumbers(N) << endl;
    cout << obj.factorial(5) << endl;
    return 0;
}
