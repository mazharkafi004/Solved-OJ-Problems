#include<bits/stdc++.h>

using namespace std;

int main() {

  long long l,r,a,x,y,z;
  cin>>l>>r>>a;
  if(l==r) {
        if(a%2==0) {
            x=a;
        }
        else {
            x=a-1;
        }
    cout<<l+r+x<<endl;
  }
  else if(l<r) {
    if(l+a<=r) {
        cout<<2*(l+a)<<endl;
    }
    else {
        x=r-l;
        x=a-x;
         if(x%2==0) {
            x=x;
        }
        else {
            x=x-1;
        }
        cout<<(2*r)+(x)<<endl;
    }
  }
  else if(l>r){
    if(r+a<=l) {
        cout<<2*(r+a)<<endl;
    }
    else {
        x=l-r;
        x=a-x;
           if(x%2==0) {
            x=x;
        }
        else {
            x=x-1;
        }
        cout<<(2*l)+(x)<<endl;
    }
  }


}
