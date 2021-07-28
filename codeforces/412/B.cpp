#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, k;
    cin >> n >> k;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n);
    cout << p[(n - k)] << endl;
}