#include<bits/stdc++.h>

using namespace std;


int main() {
long long n,m,t,a=0;
cin>>n;
long long p[n],q[n];
for(long long i=0;i<n;i++) {
    cin>>p[i]>>q[i];
}
for(long long i=0;i<n;i++) {
    for(long long j=i+1;j<n;j++) {
   if(p[j]==q[i]) {
    a++;
   }
   if(q[j]==p[i]) {
    a++;
   }
}
}
cout<<a<<endl;
}
