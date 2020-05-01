#include<bits/stdc++.h>

using namespace std;
#define p 3.1415926535897323846
int main() {
double a,b,c,d,x,y,z;
cin>>a>>b>>c>>d;
a=a/2.0;
x=(p*a*a)*d;
y=b*(p*a*a);
if(c<=x) {
    cout<<"NO"<<endl;
}
else {
    cout<<"YES"<<endl;
    z=y/(c-x);
    printf("%lf",z);
}
}
