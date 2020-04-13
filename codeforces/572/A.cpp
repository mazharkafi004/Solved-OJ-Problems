#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t,n,i;
    cin>>t>>n;
    long long p[t],q[n];
    long long a,b,c,d,e,f,k,m;
    cin>>k>>m;
    for(i=1;i<=t;i++)
 {

     cin>>p[i];
 }
    for(i=1;i<=n;i++)
 {

     cin>>q[i];
 }

 if(p[k]<q[n-m+1]) {
    cout<<"YES"<<endl;
 }
 else {
    cout<<"NO"<<endl;
 }
}
