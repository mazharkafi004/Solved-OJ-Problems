#include<bits/stdc++.h>

using namespace std;

int main() {
long long y,w,a=0,m=0,d=6,e=0;
cin>>y>>w;
m=max(y,w);
a=m-1;
long long b=d-a;
e=__gcd(b,d);

    cout<<(b/e)<<"/"<<(d/e)<<endl;


}
