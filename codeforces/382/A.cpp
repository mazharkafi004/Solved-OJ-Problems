#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c,d;
string s,t;
cin>>s;
long long m=s.size();
for(long long i=0;i<m;i++) {
    if(s[i]=='|') {
        a=i;
    }
}
cin>>t;
b=(m-(a+1));
long long n=t.size();
if(a>b) {
    long long x,y,z,p,q,r;
    z=a-b;
    q=(n-z)%2;
    r=(n-z)/2;
    x=(n-(a+b))%2;
    if(b+n<a) {
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(q==1) {
        cout<<"Impossible"<<endl;
        return 0;
    }
    else {
        y=(n-(a+b))/2;
        for(long long i=0;i<r;i++) {
            cout<<t[i];
        }
        cout<<s;;
        for(long long i=r;i<n;i++) {
            cout<<t[i];
        }
        cout<<endl;
    }

}
else if(b>a) {
    long long x,y,z,p;
    x=b-a;
    y=(n-x)%2;
    p=(n-x)/2;
     if(a+n<b) {
        cout<<"Impossible"<<endl;
        return 0;
    }
    if(y==1) {
        cout<<"Impossible"<<endl;
        return 0;
    }
    else {
        z=(n-(a+b))/2;
        for(long long i=0;i<x+p;i++) {
            cout<<t[i];
        }
        cout<<s;;
        for(long long i=x+p;i<n;i++) {
            cout<<t[i];
        }
        cout<<endl;
    }
}
else {
    long x,y,z;
    x=n%2;
    if(x==1) {
          cout<<"Impossible"<<endl;
        return 0;
    }
    else {
        z=n/2;
        for(long long i=0;i<z;i++) {
            cout<<t[i];
        }
        cout<<s;;
        for(long long i=z;i<n;i++) {
            cout<<t[i];
        }
        cout<<endl;
    }
}



}
