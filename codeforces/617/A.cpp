#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,a,b,c,d,e,f,g,h,j,k,l,m,z=0;
   cin>>n;
  a=n/5;
  b=n%5;
   if(a!=0) {
  z=z+a;
  }
  c=b/4;
  d=b%4;
  if(c!=0) {
    z=z+c;
  }
  e=d/3;
  f=d%3;
   if(e!=0) {
    z=z+e;
  }
  g=f/3;
  h=f%3;
   if(g!=0) {
    z=z+g;
  }
  j=h/2;
  k=h%2;
   if(j!=0) {
    z=z+j;
  }
l=k/1;
  m=k%1;
   if(l!=0) {
    z=z+l;
  }
cout<<z<<endl;

    }

