#include<bits/stdc++.h>

using namespace std;

int main() {

  long long a,b,c,d,i,j,n,t;
  cin>>n;
  long long p[n];

  for(i=0;i<n;i++) {
    cin>>p[i];
  }
  a=1;b=1;
  for(i=1;i<n;i++) {
  if(p[i]>p[i-1]) {
        a++;}
  else  {
    if(a>b) {
        b=a;

    } a=1;
  }


  }
  if(a>b) {
    b=a;
  }
cout<<b<<endl;

}
