#include <bits/stdc++.h>

using namespace std;

main()
{

    long long s, n, x, y;
    vector<pair<long long, long>> p;
    cin >> s >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> x >> y;
        p.push_back(make_pair(x, y));
    }
    sort(p.begin(), p.end());
    long long a = s, b = 0, c = 0;
    for (long long i = 0; i < n; i++)
    {
        if (a > p[i].first)
        {
            a += p[i].second;
        }
        else
        {
            b++;
        }
    }
    if (b == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}