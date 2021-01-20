#include<bits/stdc++.h>

using namespace std;

main() {
long long t;
cin>>t;
while(t--) {
    long long n,m;
    cin>>n>>m;
    long long p[n],q[n];
    for(long long i=0;i<n;i++) {
        cin>>p[i];
    }
     sort(p,p+n,greater<int>());
    for(long long i=0;i<n;i++) {
        cin>>q[i];
    }
    sort(q,q+n);
    long long a=0;
    for(long long i=0;i<n;i++) {
       if(p[i]+q[i]>m) {
         a++;
       }
      
    }
   if(a==0) {
       cout<<"YES"<<endl;
   } 
   else {
        cout<<"NO"<<endl;
   }
}




 }