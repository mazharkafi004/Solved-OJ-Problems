#include<bits/stdc++.h>

using namespace std;

int main() {

long long n,k,a=0,b=0,c=0,d=0,e=0,f=0,g=0,m=0,l=0;
cin>>n>>k;
long long p[k],q[k];
for(long long i=0;i<k;i++) {
    cin>>p[i];
   // a=n/p[i];
    d=n%p[i];

   q[i]=d;
}

a=q[0],b=0;
for(long long i=1;i<k;i++) {
    if(q[i]<a) {
        a=q[i];
        b=i;
    }
}
cout<<b+1<<" "<<n/p[b]<<endl;
}
