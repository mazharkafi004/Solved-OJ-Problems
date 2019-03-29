#include<bits/stdc++.h>

using namespace std;

int main() {
int m,d,a,b,c,i,n;
cin>>m>>d;

if(m==1 ||m==3 ||m==5 ||m==7 ||m==8 ||m==10 ||m==12) {
    a=3;
}
else if(m==4 ||m==6 ||m==9 ||m==11) {
    a=2;
}
else {
    a=0;
}
b=(d-1)+a;
if(m==2 && d==1) {
    c=4;
}
else if(b<=7) {
    c=4+1;
}
else {
    c=4+2;
}

cout<<c<<endl;
}
