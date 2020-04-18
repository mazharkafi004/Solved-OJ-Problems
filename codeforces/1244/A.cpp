#include<bits/stdc++.h>

using namespace std;

int main() {

 int t;
cin>>t;
 while(t--) {
    int a,b,c,d,x,y,k,z,p,q;
    cin>>a>>b>>c>>d>>k;


    p=(a%c);
    q=(b%d);
  if(p==0) {
    x=a/c;
  }
  else {
    x=(a/c)+1;
  }
  if(q==0) {
    y=b/d;
  }
  else {
    y=(b/d)+1;
  }

    z=x+y;
    if(z>k) {
        cout<<-1<<endl;
    }
    else {
        cout<<x<<" "<<y<<endl;
    }
 }

}
