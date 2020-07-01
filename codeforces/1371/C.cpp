#include<bits/stdc++.h>

using  namespace std;


int main() {
long long t;
cin>>t;
while(t--) {
long long a,b,c,d;
cin>>a>>b>>c>>d;
long long m=min(a,b);
 if(c+d>a+b) {
    cout<<"NO"<<endl;
 }
 else if(d>m ) {
    cout<<"NO"<<endl;
 }
 else {
    cout<<"YES"<<endl;
 }

}}
