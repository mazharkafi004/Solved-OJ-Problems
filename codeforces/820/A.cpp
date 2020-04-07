#include<bits/stdc++.h>
using namespace std;

int main() {
 long long c,v0,v1,a,l,x,y,t=1;
 cin>>c>>v0>>v1>>a>>l;
 x=v0;
if(c==v0) {

    cout<<1<<endl;
 }
else {
    while(c>x) {
        v0=min(v1,(v0+a));

        x+=v0-l;
        t++;
    }
    cout<<t<<endl;
 }
 }


