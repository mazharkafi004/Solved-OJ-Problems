#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,i;
    cin>>n;
    char str[n];
    cin>>str;
    for(i=1;i<=n;i++)
    {
        cout<<str[a];
        a = a+i;
        if(a>=n)
        {
            break;
        }
    }
}
