#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void printNumbers(int current, int n)
    {
        if (current > n)
            return;

        cout << current << " ";

        printNumbers(current + 1, n);
    }
    void printNto1(int current, int n)
    {
        if (current < 1)
            return;

        cout << current << " ";

        printNto1(current - 1, n);
    }
    
};

int main()
{
    Solution sol;
    int n = 10;

    sol.printNumbers(1, n);
    cout << "\n";

    sol.printNto1(n,n);
    cout << "\n";
    return 0;
}