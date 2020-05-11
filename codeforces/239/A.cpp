#include<bits/stdc++.h>

using namespace std;

int main() {
long long x,y,k,n,a,b,m,z,s=0;
cin>>y>>k>>n;
a=y/k;
//8cout<<a<<endl;
for(long long i=a+1;;i+=1) {
        b=i;
m=(k*(i));

//cout<<y<<" "<<z<<endl;
//cout<<z<<endl;
  x=(k*(i))-y;
  z=x+y;
  if(z<=n) {
        s++;
    cout<<x<<" ";
  }
  else {
    break;
  }
}
if(s==0) {
        cout<<-1<<endl;
}
}
//cout<<b<<endl; }
