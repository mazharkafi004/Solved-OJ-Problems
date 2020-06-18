#include<bits/stdc++.h>

using namespace std;


int main() {

 long long t;
 cin>>t;
 while(t--) {
        long long x,y,n;
    cin>>x>>y>>n;
    long long a=max(x,y);
    long long b=min(x,y);
    long long c=0,d=0;
    c=a;
    while(true) {
        if(c>n) {
            break;
        }
        c+=b;
        d++;
        b=a;
        a=c;
    }
    cout<<d<<endl;
 }


}
