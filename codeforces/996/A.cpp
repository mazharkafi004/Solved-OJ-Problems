#include<bits/stdc++.h>
#include<string>

using namespace std;

int main() {
int n,a,b,c,d,e,f,g,h,p,q,i;
cin>>n;
a=n/100;
b=n-(100*a);
c=b/20;
d=b-(20*c);
e=d/10;
f=d-(10*e);
g=f/5;
h=f-(5*g);
p=h/1;

cout<<a+c+e+g+p<<endl;
}
