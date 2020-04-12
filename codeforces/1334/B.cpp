#include<bits/stdc++.h>

using namespace std;

int main() {

  long long  i,a,c,d,x,y,z,t;
  long long n;
  cin>>t;
  while (t--) {
  cin>>n>>a;
  long long p[n];
  for(i=0;i<n;i++ ) {
    cin>>p[i];
  }
  sort(p,p+n);
  long long b=0;
  for(i=n-1;i>=0;i-- ) {
    if(p[i]>=a) {
        b++;

        p[i-1]=(p[i-1]+(p[i]-a));
    }
  }
  cout<<b<<endl;
  }

}
