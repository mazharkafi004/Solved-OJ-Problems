#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,t,a,b,c,d;
cin>>t;
long long p[t];
for(long long i=0;i<t;i++) {
    cin>>p[i];
}
long long s=1,x=1;
for(long long i=1;i<t;i++) {
    if(p[i]>=p[i-1]) {
        x++;
    }
    else {
    if(x>s) {
        s=x;
    }
    x=1;
}}
if(x>s) {
        s=x;
    }
cout<<s<<endl;


}
