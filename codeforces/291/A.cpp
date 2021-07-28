#include <bits/stdc++.h>

using namespace std;

main()
{
    long long n;
    cin >> n;
    vector<long long> p;
    for (long long i = 0; i < n; i++)
    {
        int z = 0;
        cin >> z;
        if (z > 0)
        {
            p.push_back(z);
        }
    }

    sort(p.begin(), p.end());
    long long a = 0, b = 0;
    for (long long i = 0; i < p.size(); i++)
    {
        if (p[i] == p[i + 1])
        {
            if (p[i + 1] == p[i + 2])
            {

                b++;
            }
            else
            {
                a++;
            }
        }
    }
    if (b == 0)
    {
        cout << a << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}