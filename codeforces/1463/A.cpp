#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, sum = 0, d;
        cin >> a >> b >> c;

        sum = a + b + c;
        d = sum / 9;
        if (d > a || d > b || d > c)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (d * 9 == sum)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}