#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, x2, y1, y2, z1, z2, a = 0, b = 0, c = 0, s = 0;
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    a = (x1 - x2) * (x1 - x2);
    b = (y1 - y2) * (y1 - y2);
    c = (z1 - z2) * (z1 - z2);
    s = a + b + c;

    if (s == 3)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}