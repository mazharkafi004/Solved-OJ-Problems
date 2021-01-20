#include<bits/stdc++.h>

using namespace std;

main() {
long long t;
cin>>t;
while(t--) {
 long long n,a=0,od=0,ev=0;
 cin>>n;
 long long p[n];
 for(long long i=0;i<n;i++) {
     cin>>p[i];
     a+=p[i];
     if(p[i]%2==0) {
         ev++;
     }
     else {
         od++;
     }
 }
 if(ev%2==0 && od%2==0) {
     cout<<"YES"<<endl;
 }
 else if(od%2==0 && ev%2!=0) {
  if(od==0) {
       cout<<"NO"<<endl;
  }
  else {
        cout<<"YES"<<endl;
  }}
  else {
       cout<<"NO"<<endl;
  }
}
}