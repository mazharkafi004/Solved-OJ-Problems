#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n, h, h0(0);
   cin>>n;
    int t = n + n - 1;
    while (n--)
    {
       cin>>h;
        t += abs(h - h0);
        h0 = h;
    }
    cout<<t<<endl;
    return 0;
}