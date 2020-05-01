#include<bits/stdc++.h>

using namespace std;

int main() {
double a,b,d,s=0,d1,d2;
cin>>a>>b;
long long t;
cin>>t;
double x1,y1,v1;
cin>>x1>>y1>>v1;
if(x1==a) {
   d=abs(y1-b) ;
   s=d/v1;
}
else if(y1==b) {
    d=abs(x1-a) ;
   s=d/v1;
}
else {
    d1=abs(x1-a) ;
    d2=abs(y1-b) ;
    d=sqrt(((d1*d1)+(d2*d2)));
    s=d/v1;
}
double x,y,v,s2;
while(t--) {
    if(t==0) {
        break;
    }
    cin>>x>>y>>v;
    if(x==a) {
   d=abs(y-b) ;
   s2=d/v;
}
else if(y==b) {
    d=abs(x-a) ;
   s2=d/v;
}
else {
    d1=abs(x-a) ;
    d2=abs(y-b) ;
    d=sqrt(((d1*d1)+(d2*d2)));
    s2=d/v;
}
if(s2<s) {
    s=s2;
}
}
printf("%6lf",s);
}
