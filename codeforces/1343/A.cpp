#include<bits/stdc++.h>

using namespace std;

int main() {
 long long t;
 cin>>t;
 while(t--) {
    long long n,a=1,b=1;
    cin>>n;
    while(1) {
        a*=2;
        b+=a;
        if(n%b==0) {
            cout<<n/b<<endl;
            break;
        }
    }
 }

}
