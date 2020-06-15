#include<bits/stdc++.h>

using namespace std;


int main() {

long long r,g,b;
cin>>r>>g>>b;
long long x=0,y=0,z=0;
if(r%2!=0) {
    r=r/2+1;
}
else {
    r=r/2;
}
if(g%2!=0) {
    g=g/2+1;
}
else {
    g=g/2;
}
if(b%2!=0) {
    b=b/2+1;
}
else {
    b=b/2;
}
if(r>g && r>b) {
    cout<<30+((r-1)*3)<<endl;
}
else if(g>b && g>=r) {
    cout<<30+((g-1)*3)+1<<endl;
}
else if(b>=g && b>=r) {
    cout<<30+((b)*3)-1<<endl;
}



}
