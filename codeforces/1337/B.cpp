#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--) {
        long long x,n,m,a,b=0,c=0,ab,li;
        cin>>x>>n>>m;
while(x>0 && m>0)
 {
     if(x>20 && n>0) {
        x=floor(x/2)+10;
        n--;
     }
     else {
        x-=10;
        m--;
     }

 }
 if(x>0) {
    cout<<"NO"<<endl;
 }
 else {
    cout<<"YES"<<endl;
 }
    }}
