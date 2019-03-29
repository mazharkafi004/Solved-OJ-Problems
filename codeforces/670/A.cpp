#include<bits/stdc++.h>

using namespace std;

int main() {
int a,b,c,n,p,q;
cin>>n;

a=n/7;
p=n%7;
//if(p>=5) {
//    p=7-p;
//}
 if(a<0) {
    a=0;
}
if(p==0) {
    b=a*2;
    c=a*2;
}
else {
        if(p<=2 && a!=0) {

    b=(a*2)+p;

   c=(a)*2;
    if(c<0) {
    c=0;
}

    }
    else if(p<=2 && a==0) {

    b=p;
    c=0;

    }
    else if(p>2 && a==0) {
            if(p==6) {
    b=2;
    c=1;
  }
  else {
    b=2;
    c=0;
  }
          }
  else if(p>2 && a!=0) { if(p==6) {
    b=(a*2)+2;
    c=(a*2)+1;
  }
  else {
    b=a*2+2;
    c=(a*2);
  }
  }


    }

cout<<c<<" "<<b<<endl;
}
