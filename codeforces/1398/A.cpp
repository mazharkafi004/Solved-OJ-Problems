#include <bits/stdc++.h>

using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long p[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        if (p[0] + p[1] <= p[n - 1])
        {
            cout << "1"
                 << " "
                 << "2"
                 << " " << n << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}