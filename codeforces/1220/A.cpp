#include <bits/stdc++.h>

using namespace std;

main()
{
    long long t, a = 0, b = 0, z = 0, e = 0, r = 0, o = 0, n = 0;
    string s;
    cin >> t;
    cin >> s;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'z')
        {
            z++;
        }

        else if (s[i] == 'n')
        {
            n++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "1 ";
    }

    for (int i = 0; i < z; i++)
    {
        cout << "0 ";
    }
    cout << endl;
}