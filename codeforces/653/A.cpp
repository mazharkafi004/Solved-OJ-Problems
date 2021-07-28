#include <bits/stdc++.h>

using namespace std;

main()
{
    int n, a = 0, b = 0;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    std::vector<int> p(s.begin(), s.end());

    if (p.size() < 3)
    {
        cout << "NO" << endl;
    }
    else
    {

        for (int i = 1; i < p.size() - 1; i++)
        {

            if ((p[i] - p[i - 1]) <= 1 && (p[i + 1] - p[i]) <= 1)

            {

                a++;
            }
            else
            {
                b++;
            }
        }
        if (a == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
