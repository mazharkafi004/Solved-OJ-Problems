#include<bits/stdc++.h>

using namespace std;

int main() {
int a,b=0,c,d=0,n,i;

cin>>n;
int p[n];
for(i=1;i<=n;i++) {
    cin>>p[i];
    if(p[i]==0) {
        a=i;

    }
    else {
        c=i;

    }
}
//cout<<a<<b<<c<<d<<endl;
if(a>c) {
    cout<<c<<endl;
}
else {
    cout<<a<<endl;
}

}