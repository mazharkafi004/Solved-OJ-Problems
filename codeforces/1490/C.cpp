#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, b = 0, i, j, c, d;
        cin >> n;

        for (i = 1; i * i * i < n; i++)
        {
            c = n - (i * i * i);
            d = cbrt(c);
            if (d * d * d == c)
            {
                b++;
                break;
            }
        }

        if (b == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
