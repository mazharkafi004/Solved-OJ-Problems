#include <bits/stdc++.h>

using namespace std;

main()
{

    int t;
    cin >> t;
    while (t--)
    {
        long long n, a = 0, b;
        cin >> n;
        long long p[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        sort(p, p + n);
        for (long long i = 0; i < n; i++)
        {
            if (p[i] > p[0])
            {
                a++;
            }
        }
        cout << a << endl;
    }
}