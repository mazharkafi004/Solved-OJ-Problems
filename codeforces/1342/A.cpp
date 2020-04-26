#include<bits/stdc++.h>

using namespace std;

int main() {
long long m,n,t,l;
cin>>t;
while(t--) {

    long long x,y,a,b,e,q,r;
    cin>>a>>b;
    cin>>x>>y;
    if(a==0 && b==0) {
        cout<<0<<endl;
    }
   else if(a==0) {
    cout<<((b*x))<<endl;
   }
   else if( b==0) {
    cout<<((a*x))<<endl;
   }
    else {
            long long f=0,p=0,d=0,c=0;
        if(b>a) {
            c=a;
            a=b;
            b=c;
        }
        d=a-b;
       // cout<<a<<" "<<b<<endl;
      if((2*b)*x<=b*y) {
        cout<<(a+b)*x<<endl;
       // return 0;
      }
      else {
        cout<<b*y+d*x<<endl;
        //return 0;
      }
//cout<<e<<endl;
        f=b*e;

        p=min((d)*x,(d*y));

        //cout<<f+p<<endl;
      //  cout<<min()
    }

}

}
