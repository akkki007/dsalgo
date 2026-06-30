#include <bits/stdc++.h>
using namespace std;

bool check(int i, string arr, int n)
{
    // base condition : to reach to the middle element only i.e if m a d a m is there then when we 
    // check for the first two and the last two we get to know that they are equal and the middle element 
    // should be escalated
    if (i >= n / 2)
        return true;

    // main condition
    if (arr[i] != arr[n - i - 1])  // 6 - 0 - 1 = 5 
        return false;
    return check(i + 1, arr, n);
}

int main()
{

    string arr = "madama";

    if (check(0, arr, arr.length()))
        cout << "It's a palindrome" << endl;
    else
        cout << "It's not a palindrome" << endl;
}