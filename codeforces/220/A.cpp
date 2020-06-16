#include<bits/stdc++.h>

using namespace std;

int main() {

 long long n;
 cin>>n;
 long long p[n],q[n];
 for(long long i=0;i<n;i++) {
    cin>>p[i];
    q[i]=p[i];
 }
 sort(q,q+n);
 long long a=0;
  for(long long i=0;i<n;i++) {

    if(q[i]!=p[i]) {
        a++;
    }
 }
 if(a==0 || a==2) {
    cout<<"YES"<<endl;
 }
 else {
    cout<<"NO"<<endl;
 }


}
