#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c,d,x,y,z,e,f;
cin>>x>>y>>z;
cin>>a>>b>>c;
d=a-x;
e=(d+b)-y;
f=(e+c)-z;
//cout<<d<<" "<<e<<" "<<f<<endl;
if(d<0) {
    cout<<"NO"<<endl;
}
else if(e<0) {
    cout<<"NO"<<endl;
}
else if(f<0) {
    cout<<"NO"<<endl;
}
else {
    cout<<"YES"<<endl;
}

}
