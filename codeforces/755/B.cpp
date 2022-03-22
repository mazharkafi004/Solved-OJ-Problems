#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, count = 0;
    vector<string> p;
    vector<string> q;
    set<string> r;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        p.push_back(s);
        r.insert(s);
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        q.push_back(s);
        r.insert(s);
    }
    count = r.size();

    if (count % 2 == 1)
    {
        n += 1;
    }
    // cout << n << " " << m << endl;
    if (n <= m)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}