#include<bits/stdc++.h>

using namespace std;

long long sum(long long x) {
long long ans=0;
for(long long i=1;i<=x;i++) {
ans+=i;
}
return ans;
}
int main() {
long long n,m,a,b,t,c=0;
cin>>n>>t;
m=sum(n);
//cout<<m<<endl;
a=t%m;
//cout<<a<<endl;
for(long long i=1;i<=n;i++) {
    a-=i;
    if(a<0) {
        a=a+i;
    }
    else if(a==0) {
        a=0;
    }
}
cout<<a<<endl;
}
