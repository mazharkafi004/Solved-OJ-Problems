#include<bits/stdc++.h>

using namespace std;

int main() {
long long t,n=0,a=0,b=0,c=0;
cin>>t;
long long p[t];
for(long long i=0;i<t;i++) {
    cin>>p[i];
}
sort(p,p+t);
for(long long i=t-1;i>=0;i--) {
    a=sqrt(p[i]);
    b=a*a;
    if(b!=p[i]) {
        c=p[i];
        break;
    }
}
cout<<c<<endl;
}
