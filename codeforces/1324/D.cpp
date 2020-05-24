#include<bits/stdc++.h>

using namespace std;

long long binarysearch(long long p[],long long l,long long r,long long x) {
    long long t=0,z=r;
while(l<=r) {
long long m=(l+(r))/2;


if(p[m]+x<=0) {
    l=m+1;

}
else {
r=m-1;
t=z-m+1;
}
}
//long long m=-1;
return t;
}


int main() {

long long n,a=0,c;
cin>>n;
long long t[n],s[n],p[n];

for(long long i=0;i<n;i++) {
   cin>>t[i];
}
for(long long i=0;i<n;i++) {
    cin>>s[i];
}
for(long long i=0;i<n;i++) {
    p[i]=t[i]-s[i];
}
sort(p,p+n);
long long d=0;
a=0;
for(long long i=0;i<n-1;i++) {

   d=binarysearch(p,i+1,n-1,p[i]);
//cout<<d<<endl;
a+=d;
   //cout<<a<<endl;
}
cout<<a<<endl;
}
