#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cout << "Enter a string : " << endl;
    cin >> s;

    // precompute
    int hash[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++; // any character subtracted from 'a' can gets its index for e.g 'b' - 'a' = 1 , 'c' - 'a' = 2
    }

    int q;
    cout << "Enter the number of queries to ask : " << endl;
    cin >> q;
    while (q--)
    {
        char c;
        cout << "Enter the character to search : " << endl;
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}