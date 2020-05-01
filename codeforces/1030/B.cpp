#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
using namespace std;

int main() {
long long n,d,t;
cin>>n>>d>>t;
while(t--) {
    long long a,b;
    cin>>a>>b;
    if(a+b>=d && a+b<=(2*n-d) && (a-b>=-d && a-b<=d)) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
}
