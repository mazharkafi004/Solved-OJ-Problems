#include<bits/stdc++.h>

using namespace std;

int main() {
long long n;
cin>>n;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
sort(p,p+n);
long long m=p[n-1],a=0;
for(long long i=0;i<n;i++) {
    if((m-p[i])%2== 1) {
        a++;
    }
}
cout<<min(a,n-a)<<endl;
}
