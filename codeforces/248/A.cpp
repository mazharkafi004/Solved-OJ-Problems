#include<bits/stdc++.h>

using namespace std;

int main() {
long long n;
cin>>n;
long long p[n],q[n];
long long a=0,b=0;
for(long long i=0;i<n;i++) {
    cin>>p[i]>>q[i];
    a+=p[i];
    b+=q[i];
}
long long m=n/2;
if(n%2!=0) {
    m=m+1;
}
long long c=0;
if(a>=m) {
    c=n-a;
}
else {
    c=a-0;
}
long long d=0;
if(b>=m) {
    d=n-b;
}
else {
    d=b-0;
}
cout<<c+d<<endl;
}
