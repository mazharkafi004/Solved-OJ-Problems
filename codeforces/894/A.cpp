#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, i = 0, j = 0, k = 0, x = 0;
    string s;
    cin >> s;
    n = s.length();
    for (i = 0; i < n - 2; i++)
    {
        if (s[i] == 'Q')
        {
            for (j = i + 1; j < n - 1; j++)
            {
                if (s[j] == 'A')
                {
                    for (k = j + 1; k < n; k++)
                    {
                        if (s[k] == 'Q')
                        {
                            x++;
                        }
                    }
                }
            }
        }
    }
    cout << x << endl;
}