#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n,m,k,a=0,b=0,c=0,d=0;
    cin>>n>>m>>k;
    long long p=n/k;
    if(p>=m) {
        cout<<m<<endl;
    }
    else {
        a=p;
        b=k-1;
        d=m-p;
//        if(d<b) {
//            cout<<0<<endl;
//        }
//      else {
if(d%b==0) {
    c=p-(d/b);
}
else {
    c=p-(d/b)-1;
}
      //}
      cout<<c<<endl;
    }
}
}
