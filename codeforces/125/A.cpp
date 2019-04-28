#include<bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,d,e;
    cin>>a;

    b=a%36;
    if(b==35) {
        a=a+1;
    }
   c=a/36;
   b=a%36;

    d=b%3;
    if(d==2) {
        b=b+1;
    }
    e=b/3;
    cout<<c<<" "<<e<<endl;
}
