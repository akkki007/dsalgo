#include <bits/stdc++.h>
using namespace std;

void countdigit(int n, int &cnt)
{
    while (n > 0)
    {
        cnt++;
        n = n / 10;
        cout << n << endl;
    }
}

int main()
{

    int n = 12110;
    int cnt = 0;
    countdigit(n, cnt);
    cout << cnt << endl;

    return 0;
}