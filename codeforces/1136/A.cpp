#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a;
    int s[2*a];

    for(int i=0;i<2*a;i++)
    {
        cin >> s[i];
    }
    cin >> b;

    for(int i=0;i<2*a;i=i+2)
    {
        if(b>=s[i] && b<=s[i+1])
        {
            c = (a) - (i/2);
            break;
        }
    }
    cout << c << endl;
}