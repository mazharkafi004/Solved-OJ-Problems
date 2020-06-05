#include<bits/stdc++.h>

using namespace std;
#define infinity 0x3f3f3f3f3f

int main() {
    long long n,r=0;
    cin>>n;
   long long p[n],q[n];
  for(long long i=0;i<n;i++) {
    cin>>p[i];
    cin>>q[i];
  }
  sort(p,p+n);
  sort(q,q+n);
  r=(p[n-1]-p[0])*(q[n-1]-q[0]);
  if(r>0) {
    cout<<r<<endl;
  }
  else {
    cout<<-1<<endl;
  }


}
