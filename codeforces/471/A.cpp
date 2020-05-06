#include<bits/stdc++.h>

using namespace std;

int main() {
long long t=6,p[6],a=0,b=0,c=0;
for(long long i=0;i<t;i++) {
    cin>>p[i];
}
sort(p,p+t);
b=0;c=0;
for(long long i=0;i<t;i++) {
   for(long long j=0;j<t;j++) {
    if(p[j]==p[i]){
        b++;
    }
    if(b>c) {
        c=b;
        a=p[i];
    }
}
b=0;
}
if(c<4) {
    cout<<"Alien"<<endl;
    return 0;
}
long long x=0,y=0,z=0;
for(long long i=0;i<t;i++) {
    if(p[i]!=a) {
        x++;
        if(x==1) {
            y=p[i];
        }
        else {
            z=p[i];
        }
    }
}
if(y==z) {
    cout<<"Elephant"<<endl;
}
else {
    cout<<"Bear"<<endl;
}
}
