#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    double sum = m;
    for (int i = 1; i < m; i++)
    {
        sum -= pow(((double)i / m), n);
    }
    cout << sum << endl;
}