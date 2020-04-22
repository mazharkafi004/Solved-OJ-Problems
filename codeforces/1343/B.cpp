#include<bits/stdc++.h>

using namespace std;

int main() {

long long t;
cin>>t;
while(t--) {
    long long n,a,m,b;
    cin>>n;
    long long p[t],q[t];

    if(((n/2)-1)%2==0) {
        cout<<"NO"<<endl;
    }
   else {
        cout<<"YES"<<endl;
   for(long long i=1;i<=(n/2);i++) {
    cout<<i*2<<" ";
   }
    for(long long i=1;i<=(n/2);i++) {

    if(i<n/2) {
        cout<<(i*2)-1<<" ";
    }
    else {
        cout<<(i*2)+(n/2)-1<<" ";
    }
   }
   cout<<endl;
}}}
