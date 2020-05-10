#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long a,b,c,m,n,p,q,e,r,s,z=0;
    cin>>a>>b>>c;
   while(c>=2) {
    if(b>=1 && c>=2) {
        z++;
    }
    b--;
    c-=2;
   }
   b=b;
   while(b>=2) {
    if(a>=1 && b>=2) {
        z++;
    }
    a--;
    b-=2;
   }
   cout<<3*z<<endl;
}

}
