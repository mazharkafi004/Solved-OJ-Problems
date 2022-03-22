#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, count = 0, b = 0;
    cin >> n;

    for (int i = 2;; i++)
    {
        int a = (i * 9) + 1;
        int sum = 0;
        while (a != 0)
        {
            sum = sum + a % 10;
            a = a / 10;
        }
        if (sum == 10)
        {
            count++;
            if (count == n)
            {
                b = (i * 9) + 1;
                break;
            }
        }
        if (count == n)
        {
            break;
        }
    }
    cout << b << endl;
    // cout << ((n + 1) * 9) + 1 << endl;
}