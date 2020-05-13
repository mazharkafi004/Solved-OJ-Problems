#include<bits/stdc++.h>

using namespace std;


int main() {
long long a,b,c,d,e,f;
cin>>a>>b>>c;
d=c/a;
e=c/b;
for(long long i=0;i<=d;i++) {
for(long long j=0;j<=e;j++) {
    if(a*i+j*b==c) {
        cout<<"YES"<<endl;
        return 0;
    }
}
}
cout<<"NO"<<endl;
}
