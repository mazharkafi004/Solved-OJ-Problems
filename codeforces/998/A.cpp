#include<bits/stdc++.h>

using namespace std;


int main() {
  int n,m,a=0,b=0,x;
  cin>>n;
  long long p[n],q[n];
  for(long long i=0;i<n;i++) {
    cin>>p[i];
    q[i]=p[i];
  }
  sort(p,p+n);
  for(long long i=1;i<n;i++) {
    a+=p[i];
  }
  if(p[0]==a) {
    cout<<-1<<endl;
  }
  else  if(a==0) {
    cout<<-1<<endl;
  }
  else  if(p[0]==0) {
    cout<<-1<<endl;
  }
  else {
    cout<<1<<endl;
    for(long long i=0;i<n;i++) {
    if(p[0]==q[i]) {
        cout<<i+1<<endl;
        break;
    }
  }
  }

}
