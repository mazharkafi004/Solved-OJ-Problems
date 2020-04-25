#include<bits/stdc++.h>
using namespace std;

int main() {
long long a,b,n,x,y,p,z,c,d;
cin>>n>>x>>y;
d=n*y;
if(d%100==0) {
    a=d/100;
}
else {
    a=(d/100)+1;
}
//cout<<a-x<<endl;
c=a-x;
if(c<0) {
    c=0;
}
cout<<c<<endl;


}
