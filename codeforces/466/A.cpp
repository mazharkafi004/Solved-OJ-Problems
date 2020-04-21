#include<bits/stdc++.h>

using namespace std;

int main() {
int n,m,a,b,x,y,z;
cin>>n>>m>>a>>b;
x=(n%m);
y=n/m;
if(y<=0) {
    y=1;
}
if(n<m) {
    cout<<min(b,(n*a));
    return 0;
}
if(x==0) {
    cout<<min((y*b),(n*a))<<endl;
}
else {
        z=min(((y*b)+(x*a)),((y+1)*b));
    cout<<min(z,(n*a))<<endl;
}

}
