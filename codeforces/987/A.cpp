#include<bits/stdc++.h>

using namespace std;


int main() {

long long n;
cin>>n;
string s;

long long p=0,g=0,b=0,o=0,r=0,y=0;
for(long long i=0;i<n;i++) {
    cin>>s;
    if(s[0]=='p') {
        p++;
    }
     if(s[0]=='g') {
        g++;
    }
     if(s[0]=='b') {
        b++;
    }
     if(s[0]=='o') {
        o++;
    }
     if(s[0]=='r') {
        r++;
    }
     if(s[0]=='y') {
        y++;
    }
}
n=6-n;
cout<<n<<endl;
//cout<<p<<g<<b<<o<<r<<y<<endl;
for(long long i=0;i<n;i++) {


    if(p==0) {
            cout<<"Power"<<endl;
        p++;
    }
     if(g==0) {
            cout<<"Time"<<endl;
        g++;
    }
   if(b==0) {
            cout<<"Space"<<endl;
        b++;
    }
     if(o==0) {
            cout<<"Soul"<<endl;
        o++;
    }
   if(r==0) {
            cout<<"Reality"<<endl;
        r++;
    }
     if(y==0) {
            cout<<"Mind"<<endl;
        y++;
    }
}

}
