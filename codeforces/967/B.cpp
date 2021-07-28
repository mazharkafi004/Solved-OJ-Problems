#include <bits/stdc++.h>

using namespace std;

main()
{

    int n, a, b, x = 0;
    cin >> n >> a >> b;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        x += p[i];
    }
    sort(p + 1, p + n);
    int d = 0, e = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (((p[0] * a) / x) < b)
        {
            x -= p[i];
            d++;
        }
    }
    cout << d << endl;
}