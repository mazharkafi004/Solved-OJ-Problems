#include<bits/stdc++.h>
using namespace std;
int main() {
long long a,b,x,y,z,c,d,g;

cin>>a>>b>>x>>y;
g=__gcd(x,y);
x/=g;
y/=g;
c=a/x;
d=b/y;
z=min(c,d);
cout<<x*z<<" "<<y*z<<endl;
}