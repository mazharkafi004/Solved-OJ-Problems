#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long a,b,c,n,x,y,d,e,f,m=0,z;
    cin>>a>>b>>c>>n;
    m=a+b+c+n;
    if(m%3==0 && a<=m/3 && b<=m/3 && c<=m/3) {
        cout<<"YES"<<endl;
    }
    else {
         cout<<"NO"<<endl;
    }
}
}
