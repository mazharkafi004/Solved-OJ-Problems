#include<bits/stdc++.h>

using namespace std;

int main() {

long long t;
cin>>t;
while(t--) {
    long long n,k,a=0,b=0,c=0;
    cin>>n>>k;

    if(n%2==0) {
        b=n+(k*2);
        cout<<b<<endl;
    }
    else {
            for(long long i=2;i<=n;i++) {
        if(n%i==0) {
            a=i;
            break;
        }
    }
        b=a+n+(2*(k-1));
        cout<<b<<endl;
    }
}

}
