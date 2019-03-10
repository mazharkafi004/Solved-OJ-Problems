#include<bits/stdc++.h>

using namespace std;

int main() {
int a,b,c,x,y,z,d,e,f,g;
cin>>a>>b>>c;
x=a/1; //1
y=b/2; //500
z=c/4; //250
 if(x==y && y==z && z== x) {
    g=x*1+x*2+x*4;
    cout<<g<<endl;
}

else if(y<=z && y<=x) {
    e=y*1+y*2+y*4;
    cout<<e<<endl;
}
else if(z<=x && z<=y) {
    f=z*1+z*2+z*4;
    cout<<f<<endl;
}

else if(x<=y && x<=z) {
    d=x*1+x*2+x*4;
    cout<<d<<endl;
}
}