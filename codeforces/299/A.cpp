#include <bits/stdc++.h>

using namespace std;

main()
{
    long long n;
    cin >> n;
    long long p[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n);
    long long a = 0, b = p[0];
    for (long long i = 0; i < n; i++)
    {
        //cout << p[i] << " " << b << endl;
        if (p[i] % b == 0)

        {
            a++;
        }
    }
    if (a == n)
    {
        cout << b << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}