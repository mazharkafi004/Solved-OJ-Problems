#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long r, b, d, m, n;
        cin >> r >> b >> d;
        long long mx, mn;
        mx = max(r, b);
        mn = min(r, b);
        if (mn * d + mn >= mx)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}