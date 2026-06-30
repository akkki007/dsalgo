#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int reversed = 0;
        while (x != 0)
        {
            int remain = x % 10;
            reversed = reversed * 10 + remain;
            x = x / 10;
        }
        return x == reversed;
    }
};

int main()
{

    Solution sol;
    cout << sol.isPalindrome(121) << endl;

    return 0;
}