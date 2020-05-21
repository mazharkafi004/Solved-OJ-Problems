#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long a,b;
    cin>>a>>b;
    long long c=__gcd(a,b);
    if(c!=1) {
        cout<<"Infinite"<<endl;
    }
    else {
        cout<<"Finite"<<endl;
    }
}

}
