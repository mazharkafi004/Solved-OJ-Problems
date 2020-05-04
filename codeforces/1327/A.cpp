#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n,k;
    cin>>n>>k;
    if(n%2==1 && k%2==1 &&(k*k)<=n) {
        cout<<"YES"<<endl;

    }
    else if(n%2==0 && k%2==0 && (k*k)<=n ) {
        cout<<"YES"<<endl;

    }
    else {
        cout<<"NO"<<endl;
    }
}

}
