#include<bits/stdc++.h>

using namespace std;
int main() {
long long t;
cin>>t;
while(t--) {

long long n,k,a;
cin>>n>>k;
if(n%2==0 && k%2==0) {
    a=1*(k-1);
    if((n-a)%2==1 && n-a>0) {
        cout<<"YES"<<endl;
        for(long long i=0;i<k-1;i++) {
            cout<<1<<" ";
        }
        cout<<n-a<<endl;;
    }
    else {
        cout<<"NO"<<endl;
    }
 }
 else if(n%2==0 && k%2!=0) {
    a=2*(k-1);
    if((n-a)%2==0 && n-a>0) {
        cout<<"YES"<<endl;
        for(long long i=0;i<k-1;i++) {
            cout<<2<<" ";
        }
        cout<<n-a<<endl;;
    }
    else {
        cout<<"NO"<<endl;
    }
 }
  else if(n%2!=0 && k%2!=0) {
    a=1*(k-1);
    if((n-a)%2==1 && n-a>0) {
        cout<<"YES"<<endl;
        for(long long i=0;i<k-1;i++) {
            cout<<1<<" ";
        }
        cout<<n-a<<endl;;
    }
    else {
        cout<<"NO"<<endl;
    }
 }
 else {
    cout<<"NO"<<endl;
 }
}
}
