#include<bits/stdc++.h>

using namespace std;


int main() {
long long a,b,n,x,y,z=0;
cin>>a>>b>>n;

while(1)
{
    n-=__gcd(a,n);
    if(n==0) {
        cout<<0<<endl;
        break;
    }
     n-=__gcd(b,n);
    if(n==0) {
        cout<<1<<endl;
        break;
    }

}



}
