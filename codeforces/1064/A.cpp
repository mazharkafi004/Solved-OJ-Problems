#include<bits/stdc++.h>

using namespace std;


int main() {

 int a,b,c,d,m,x,y,z;
 cin>>a>>b>>c;
 if(a>b && a>c) {
    x=a;
    if(b>c) {
      y=b;
      z=c;
    }
    else {
       y=c;
      z=b;
    }
 }
 else  if(a<b && b>c) {
    x=b;
     if(a>c) {
      y=a;
      z=c;
    }
    else {
       y=c;
      z=a;
    }
 }
 else {
        x=c;
     if(a>b) {
      y=a;
      z=b;
    }
    else {
       y=b;
      z=a;
    }
 }
 //cout<<m<<endl;
 //cout<<x<<y<<z<<endl;
 if(z+y>x) {
    cout<<00<<endl;
 }
 else {
 d=(x-(y+z))+1;
 cout<<d<<endl;}

}
