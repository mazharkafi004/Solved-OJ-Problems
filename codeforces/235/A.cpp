#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a=0,d=0,e=0;
cin>>n;
d=n%2;
e=n%3;
if(n<=2) {
    cout<<n<<endl;
    return 0;
}
if(d==1) {
    a=n*(n-1)*(n-2);
}
else {
    if(e!=0) {
        a=n*(n-1)*(n-3);
    }
    else {
        a=(n-2)*(n-1)*(n-3);
    }
}

cout<<a<<endl;
}
