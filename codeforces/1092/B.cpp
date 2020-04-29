#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c,n,sum;
cin>>n;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
sort(p,p+n);

sum=0;
for(long long i=0;i<n-1;i++) {
    sum+=p[i+1]-p[i];
    i++;
}
cout<<sum<<endl;
}
