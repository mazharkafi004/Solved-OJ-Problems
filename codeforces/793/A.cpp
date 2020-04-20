#include<bits/stdc++.h>

using namespace std;

int main() {

long long n,t,c,d;
cin>>t>>n;
long long p[t];
for(long long i=0;i<t;i++) {
    cin>>p[i];
}
sort(p,p+t);
long long a=p[0];
for(long long i=1;i<t;i++) {
      c=p[i]-a;
   if((c%n)!=0) {
    cout<<-1<<endl;
    return 0;
   }}
   long long b=0;
   for(long long i=1;i<t;i++) {
     d=p[i]-a;
     b+=(d/n);
   }


cout<<b<<endl;
}

