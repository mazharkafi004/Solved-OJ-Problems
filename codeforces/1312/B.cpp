#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c,t;
cin>>t;
while(t--) {
    long long n;
    cin>>n;
    long long p[n];
    for(long long i=0;i<n;i++) {
        cin>>p[i];
    }
    sort(p,p+n);
    for(long long i=n-1;i>=0;i--) {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}

}
