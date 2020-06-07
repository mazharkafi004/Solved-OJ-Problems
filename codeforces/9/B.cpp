#include<bits/stdc++.h>

using  namespace std;

int main() {
long long n;
double v1,v2;
cin>>n>>v1>>v2;
long long p[n];


for(long long i=0;i<n;i++) {
    cin>>p[i];
}
double x,y;
cin>>x>>y;
double mn=1000001,m=0,k=0,l=0,q=0;

for(long long i=1;i<n;i++) {
        m=0;
   q=x-p[i];

   m+=p[i]/(v1*1.0);
   m+=sqrt((q*q)+(y*y))/(v2*1.0);

   if(m<=mn) {
    k=i+1;
    mn=m;
   }

}
cout<<k<<endl;
}
