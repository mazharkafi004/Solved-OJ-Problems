#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,ans;
    cin>>a>>b;
    c=ceil(a/2.0);
    if(b>c){
        ans=(b-c)*2;
    }
    else if(b<=c){
        ans=(2*b)-1;
    }
    cout<<ans<<endl;
    return 0;

}
