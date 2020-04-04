#include<bits/stdc++.h>
using namespace std;
int main() {
long long x,y,a,b,m,n,t,d,i;
cin>>t;
while(t--) {
cin>>x>>y>>a>>b;
m=((y-x)%(a+b));
n=((y-x)/(a+b));
if(m!=0) {
cout<<-1<<endl;
}
else {
cout<<n<<endl;
}}}