#include<bits/stdc++.h>

using namespace std;


int main() {

long long b,d,s;
cin>>b>>d>>s;
if(b==d && b==s) {
    cout<<0<<endl;
    return 0;
}
long long p=0,q=0,r=0;
if(b>=d && b>= s) {
    p=b;
    if(d>=s) {
        q=d;
        r=s;
    }
    else {
        q=s;
        r=d;
    }
}
else if(d>=b && d>= s) {
    p=d;
    if(b>=s) {
        q=b;
        r=s;
    }
    else {
        q=s;
        r=b;
    }
}
else {
    p=s;
    if(b>=d) {
        q=b;
        r=d;
    }
    else {
        q=d;
        r=b;
    }
}
//cout<<p<<" "<<q<<" "<<r<<endl;
//cout<<p-q<<" "<<p-r<<endl;
if((p-q)<=1 && (p-r)<=1) {
    cout<<0<<endl;
}
else {
        long long n=p-1;
        //cout<<n<<endl;
        long long a=0,b=0;
        a=n-q;
        b=n-r;
        //cout<<a<<" "<<b<<endl;
        if(a<0) {
            a=0;
        }
        if(b<0) {
            b=0;
        }
    cout<<a+b<<endl;
}
}
