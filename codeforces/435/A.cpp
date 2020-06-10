#include<bits/stdc++.h>

using namespace std;


int main() {

long long n,m,a=0,b=0;
cin>>n>>m;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}

for(long long i=0;i<n;i++) {
// cout<<p[i]+b<<" "<<a<<" "<<m<<endl;
   if(p[i]+b>m) {
    if(i==n-1) {
        a=a+2;
    }
    else {
        b=p[i];
    a++;
    }
   }

   else if(p[i]+b==m) {
    a++;
    b=0;
   }
   else if(p[i]+b<m){
    if(i==n-1) {
        a++;
    }
else {
    b+=p[i];
}



}
 // cout<<p[i]<<" "<<b<<" "<<a<<endl;
//<<b<<endl;
}
cout<<a<<endl;
}
