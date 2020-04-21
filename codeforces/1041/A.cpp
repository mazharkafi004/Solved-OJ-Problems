#include<bits/stdc++.h>

using namespace std;

int main() {
  long long t,n=0;
  cin>>t;
  long long p[t],q[t];
  for(long long i=0;i<t;i++) {
    cin>>p[i];

  }
  sort(p,p+t);
  long long b=p[0];

   for(long long i=0;i<t-1;i++) {
    if(p[i+1]-p[i]>1) {
        n+=p[i+1]-p[i]-1;
    }

  }
  //cout<<n<<endl;

cout<<n<<endl;
}
