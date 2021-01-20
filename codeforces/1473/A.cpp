#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--) {
        long long n,d;
        cin>>n>>d;
        long long p[n];
    for(long long i=0;i<n;i++) {
        cin>>p[i];
    }
    sort(p,p+n);
    if(p[n-1]<=d) {
        cout<<"YES"<<endl;
    } 
    else if(p[0]+p[1]<=d) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    }

}
