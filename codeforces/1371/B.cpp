#include<bits/stdc++.h>

using  namespace std;


int main() {
long long t;
cin>>t;
while(t--) {

        long long n,r;
   cin>>n>>r;
  if(n>r) {
    cout<<(r*(r+1))/2<<endl;
  }
  else {
  long long a=0,b=0,c=0;
  a=(n-1)*n;
  b=a/2;
  cout<<b+1<<endl;
  }


}
}
