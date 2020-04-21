#include<bits/stdc++.h>

using namespace std;

int main() {
 int a,b,c,d,e,f,g;
 cin>>a>>b>>c;
 if(a>b && a>c) {
    e=a;
    if(b>c) {
        f=b;
        g=c;
    }
    else {
        f=c;
        g=b;
    }
 }
 else if(b>a && b>c) {
    e=b;
    if(a>c) {
        f=a;
        g=c;
    }
    else {
        f=c;
        g=a;
    }
 }
 else  {
    e=c;
    if(a>b) {
        f=a;
        g=b;
    }
    else {
        f=b;
        g=a;
    }
 }
 //cout<<e<<f<<g<<endl;
 cout<<(e-f)+(f-g)<<endl;


}
