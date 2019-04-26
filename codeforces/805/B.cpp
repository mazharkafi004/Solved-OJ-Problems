#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char str[n];

    for(i=1;i<=n;i++)
    {
        if(i%4==0) str[i]='b';
        else if(i%4==1) str[i]='a';
        else if(i%4==2) str[i]='a';
        else if(i%4==3) str[i]='b';}

    for(i=1;i<=n;i++) {
    cout<<str[i]; }
}
