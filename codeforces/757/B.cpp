#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,t,a=0,b=0,c=0,d=0,x=0,y=0,z=0,q=0;
cin>>n;
long long p[1000005];
for(long long i=1;i<=n;i++) {
    cin>>t;
    z=max(z,t);
    p[t]++;
    for(long long i=2;i*i<=t;i++) {
        if(t%i==0) {
            if(i*i!=t) {
                p[i]++;
                p[t/i]++;
            }
            else {
                p[i]++;
            }
        }
    }
}
x=1;
for(long long i=2;i<=z;i++) {
    if(p[i]>x) {
        x=p[i];
    }
}
cout<<x<<endl;
}
