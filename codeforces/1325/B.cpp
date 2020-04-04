#include<bits/stdc++.h>
using namespace std;
int main() {
long long x,y,a,n,t,d,i;
cin>>t;
while(t--) {
cin>>n;
int p[n];
for(i=0;i<n;i++) {
cin>>p[i];
}
sort(p,p+n);
a=p[0];
int b=1;
for(i=0;i<n;i++) {
if(a<p[i]) {
b++;
a=p[i];
}
}
cout<<b<<endl;}}