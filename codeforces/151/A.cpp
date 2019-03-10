#include<bits/stdc++.h>

using namespace std;

int main() {
int i, k, l, c, d, p, nl, np,x,y,z,m,n,o;
cin>>i>>k>>l>>c>>d>>p>>nl>>np;
x=(k*l)/nl; //200 //50
y=c*d; //19 //4
z=p/np; //30 //7
m=x/i;
n=y/i;
o=z/i;
if(m==n && m==o) {
    cout<<n;
}
else if(m<=n && m<=o) {
    cout<<m<<endl;
}
else if(o<=n && o<=m) {
    cout<<o<<endl;
}
else if(n<=m && n<=o) {
    cout<<n<<endl;
}
}