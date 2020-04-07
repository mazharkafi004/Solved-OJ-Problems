#include<bits/stdc++.h>

using namespace std;

int main() {

   long long a,b,x,y,z,p,q,r,s,c,d,bl,gr,yl;
   cin>>a>>b;

   cin>>x>>y>>z;

   yl=2*x+y;
   bl=3*z+y;
   c=yl-a;
   d=bl-b;
 if(c<0) {
    c=0;
 }

 if(d<0) {
    d=0;
 }
 cout<<c+d<<endl;

}
