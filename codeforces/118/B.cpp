#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,m,t,a,b,c,d;
cin>>n;
m=n+1;
for(long long i=0;i<m;i++) {
         for(long long j=0;j<2*(n-i);j++) {
    cout<<" ";
}
    for(long long j=0;j<=i;j++) {
    if(j==0 && i==0) {
        cout<<j;
    }
    else {
        cout<<j<<" ";
    }
}
 for(long long j=i-1;j>=0;j--) {

    if(j!=0) {
        cout<<j<<" ";
    }
    else {
        cout<<j;
    }
}


cout<<endl;
}
for(long long i=n-1;i>=0;i--) {
             for(long long j=0;j<2*(n-i);j++) {
    cout<<" ";
}
    for(long long j=0;j<=i;j++) {
    if(j==0 && i==0) {
        cout<<j;
    }
    else {
        cout<<j<<" ";
    }
}
 for(long long j=i-1;j>=0;j--) {

    if(j!=0) {
        cout<<j<<" ";
    }
    else {
        cout<<j;
    }
}


cout<<endl;
}
}
