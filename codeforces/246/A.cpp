#include <bits/stdc++.h>

using namespace std;

main()
{

    int n;
    cin >> n;
    if (n < 3)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << 1 << endl;
    }
}