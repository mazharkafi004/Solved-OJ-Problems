#include<bits/stdc++.h>
using namespace std;

int main() {
int a,b,c,d,e,f;
cin>>a>>b>>c;
d=a-c;
if((b+1)>=d) {
    e=b+1;
}
else {
    e=d;
}
f=a-e+1;
cout<<f<<endl;
}
