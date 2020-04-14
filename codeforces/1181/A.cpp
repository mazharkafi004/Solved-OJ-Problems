#include<bits/stdc++.h>

using namespace std;

int main() {

long long x,y,z,a,b,c,d,e,f=0,g=0;
cin>>x>>y>>z;
a=x/z;
b=y/z;
c=x%z;
d=y%z;
if(c==d) {
        f=z-c;
    if(f<=d) {
        f=z-c;
        g++;
    }
    else {
        f=0;
    }
}
else if(c>d && c!=0 && d!=0) {
     f=z-c;
    if(f<=d) {
        f=z-c;
        g++;
    }
    else {
        f=0;
    }
}
else if( d>c && c!=0 && d!=0){
    f=z-d;
    if(f<=c) {
        f=z-d;
        g++;
    }
    else {
        f=0;
    }
}
e=f/z;
cout<<a+b+g<<" "<<f<<endl;

}
