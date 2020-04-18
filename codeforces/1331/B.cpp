#include<bits/stdc++.h>
using namespace std;

int main() {

  int n,a;
  cin>>n;
  for(int i=2;i<n;i++) {
    a=n%i;
    if(a==0) {
        cout<<i<<n/i<<endl;
        return 0;
    }
  }

}
