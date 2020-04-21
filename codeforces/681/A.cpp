#include<bits/stdc++.h>

using namespace std;

int main() {

 long long t;
 cin>>t;
 char a[15];
 long long p,q,b=0;
 for(long long i=1;i<=t;i++) {
   cin>>a>>p>>q;
   if(p>=2400 && q>p) {
    b++;
   }
 }
   if(b==0) {
     cout<<"NO"<<endl;
   }
   else {
    cout<<"YES"<<endl;

   }
 }



