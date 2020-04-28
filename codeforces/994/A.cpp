#include<bits/stdc++.h>

using namespace std;

int main() {
 long long n,m,mx;
 cin>>n>>m;
 long long x[n],y[m];
 for(long long i=0;i<n;i++) {
    cin>>x[i];
 }
 for(long long i=0;i<m;i++) {
    cin>>y[i];
 }
 mx=max(n,m);
 for(long long i=0;i<n;i++) {
   for(long long j=0;j<m;j++) {
   if(y[j]==x[i]) {
    cout<<y[j];
   // break;
   cout<<" ";
   }
   //cout<<" ";
 }
 }


}
