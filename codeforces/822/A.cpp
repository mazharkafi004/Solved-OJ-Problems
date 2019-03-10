#include<bits/stdc++.h>

using namespace std;

int main() {
int a,b,c=1,d=1,i;
cin>>a>>b;
if(a>b) {
    for(i=1;i<=b;i++) {
        c=c*i;
    }
    cout<<c<<endl;
}
else {  for(i=1;i<=a;i++) {
        d=d*i;
    }
    cout<<d<<endl;
}

}