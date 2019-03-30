#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c,n,p,q,r,i;
cin>>n;
for(i=0;i<n;i++) {
    cin>>a>>b>>c;
     p=a/2;
     q=(a%2)*b;
     if((2*b)>=c) {
        r=c;
     }
     else {
        r=2*b;
     }
     cout<<p*r+q<<endl;
}
}
