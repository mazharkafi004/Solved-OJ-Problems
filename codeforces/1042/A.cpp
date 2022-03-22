#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    sort(p, p + n);
    int mx = p[n - 1] + m;
    while (m != 0)
    {
        p[0] += 1;

        m--;

        sort(p, p + n);
    }
    cout << p[n - 1] << " " << mx << endl;
}