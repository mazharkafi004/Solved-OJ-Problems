#include<bits/stdc++.h>

using namespace std;

int main() {

 long long t,n;
 cin>>t>>n;
 long long p[n];
 for(long long i=0;i<n;i++) {
    cin>>p[i];
 }
 sort(p,p+n);
// for(long long i=0;i<n;i++) {
//    cout<<p[i];
// }
// cout<<endl;
 long long s=p[t-1]-p[0],m;
 //cout<<s<<endl;
for(long long i=1;i<(n-t)+1;i++) {
    m=p[i+(t-1)]-p[i];
   // cout<<m<<" "<<s<<endl;
    if(m<s) {
        s=m;
    }
 }
 cout<<s<<endl;

}
