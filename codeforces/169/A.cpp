#include <bits/stdc++.h>

using namespace std;

main()
{
    long long n, a, b;
    cin >> n >> a >> b;
    long long p[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n);
    cout << p[b] - p[b - 1] << endl;
}