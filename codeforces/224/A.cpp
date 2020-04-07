#include<bits/stdc++.h>

using namespace std;

int main() {

 double a,b,c,x,y,z,sum=0;

 cin>>a>>b>>c;

 x=sqrt((a*c)/b);
 y=sqrt((a*b)/c);
 z=sqrt((b*c)/a);
 sum=(x+y+z);

 cout<<4*sum<<endl;
}
