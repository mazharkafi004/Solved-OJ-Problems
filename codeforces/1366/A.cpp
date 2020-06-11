#include<bits/stdc++.h>

using namespace std;


int main() {

long long t;
cin>>t;
while(t--) {
    long long a,b,c=0,d=0;
    cin>>a>>b;
     c=min(a,b);
     d=max(a,b);
     if(d<=2*c) {
        cout<<(c+d)/3<<endl;
     }
     else {
        cout<<c<<endl;
     }

      }
}


