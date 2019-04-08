
#include<bits/stdc++.h>

using namespace std;

int main()
{ int a,b,c,d=0,e=0,f,g,p,q;
    int h1,m1,h2,m2;
  scanf("%d:%d", &h1, &m1);
scanf("%d:%d", &h2, &m2);
if(m1<m2 && h1==h2) {
    m1=m1+60;
    h1=h1+23;
}
if(h1<=h2 && h2!=0) {
    h1=h1+24;
}
if(h1==0 && h2!=0) {
    h1=24;
}
if(m1==0 && m2!=0) {
    m1=60;
    h1=h1-1;
}


if(m1<m2) {
    m1=m1+60;
    h1=h1-1;
}


a=(h1-h2);
if(a>24) {
    a=h2;
}
if(a==24) {
    a=a-24;
}
c=(m1-m2);

cout<<setw(2)<<setfill('0')<<a<<":"<<setw(2)<<setfill('0')<<c<<endl;

}
