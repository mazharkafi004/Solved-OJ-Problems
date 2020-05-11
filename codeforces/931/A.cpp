#include<bits/stdc++.h>

using namespace std;
int main() {

long long a,b,m=0,x=0,y=0;
cin>>a>>b;
m=abs(a-b);
if(m%2==0) {
    for(long long i=1;i<=(m/2);i++) {
        x+=i;
    }
    for(long long i=1;i<=(m/2);i++) {
        y+=i;
    }
}
else {
     for(long long i=1;i<=(m/2)+1;i++) {
        x+=i;
    }
    for(long long i=1;i<=(m/2);i++) {
        y+=i;
    }
}
cout<<x+y<<endl;
}
