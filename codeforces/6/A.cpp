#include <bits/stdc++.h>

using namespace std;

main()
{
    int t = 0, s = 0;
    int p[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> p[i];
    }
    sort(p, p + 4);
    for (int i = 0; i < 4 - 2; i++)
    {
        if (p[i] + p[i + 1] > p[i + 2])
        {
            t++;
        }
    }
    for (int i = 0; i < 4 - 2; i++)
    {
        if (p[i] + p[i + 1] >= p[i + 2])
        {
            s++;
        }
    }
    if (t != 0)
    {
        cout << "TRIANGLE" << endl;
    }
    else if (s != 0)
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }
}