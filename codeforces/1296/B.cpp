#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, sum = 0, count = 0;
        cin >> n;
        if (n < 10)
        {
            cout << n << endl;
        }
        else
        {
            while (n != 0)
            {
                if (n >= 10)
                {
                    count = (n / 10);
                    int a;
                    a = (n / 10) * 10;
                    sum += a;

                    n = (n - a) + count;
                }
                else
                {
                    sum += n;
                    n = 0;
                }
            }
            cout << sum << endl;
        }
    }
}