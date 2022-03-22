#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, count = 0, i, a = 0;
        cin >> n;
        while (n > 1)
        {
            for (i = 1;; i++)
            {

                sum = sum + i;

                a = (2 * sum + (sum - i));

                if (a == n)
                {

                    count++;
                    n = n - a;
                    i = 1;
                    sum = 0;
                    break;
                }
                else if (a > n)
                {
                    if (n < 1)
                    {
                        break;
                    }
                    else
                    {

                        int c = (2 * (sum - i)) + (sum - (i + (i - 1)));

                        count++;
                        n = n - c;
                        i = 1;
                        sum = 0;
                        break;
                    }
                }
                if (n == 1)
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }
}