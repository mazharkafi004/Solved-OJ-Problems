#include<bits/stdc++.h>

using namespace std;

main() {
int t;
cin>>t;
while(t--) {
    int n,z=0;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++) {
        cin>>p[i];
    }
    if(n==1) {
        cout<<"YES"<<endl;
    }
    else {
        sort(p,p+n);
    for(int i=1;i<n;i++) {
        if(p[i]-p[i-1]<=1) {
            z++;
        }
        else {
            z=0;
            break;
        }
    }
    if(z==0) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
    }

}}


