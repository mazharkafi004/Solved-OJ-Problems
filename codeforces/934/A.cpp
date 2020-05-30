#include<bits/stdc++.h>

using namespace std;


int main() {
long long n,m;
cin>>n>>m;
long long p[n],q[m];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}

for(long long i=0;i<m;i++) {
    cin>>q[i];
}
long long mx=0,mn=5e18,c=0;
for(long long i=0;i<n;i++) {
        mx=-5e18;
for(long long j=0;j<n;j++) {
    if(i!=j) {
    for(long long k=0;k<m;k++) {
        c=p[j]*q[k];
mx=max(c,mx);
}}
}
mn=min(mn,mx);
}
cout<<mn<<endl;
}
