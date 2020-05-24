#include<bits/stdc++.h>

using namespace std;

int main() {
long long n;
cin>>n;
string s;
cin>>s;
if(n%4!=0) {
    cout<<"==="<<endl;
    return 0;
}
long long a=0,c=0,t=0,g=0,b=0,d=0;
for(long long i=0;i<s.size();i++) {
    if(s[i]=='A') {
        a++;
    }
    if(s[i]=='C') {
        c++;
    }
    if(s[i]=='G') {
        g++;
    }
    if(s[i]=='T') {
        t++;
    }
    if(s[i]=='?') {
        b++;
    }
}
long long p=n/4;
if(a>p || c>p || g>p || t>p) {
    cout<<"==="<<endl;
    return 0;
}
for(long long i=0;i<s.size();i++) {


    if(s[i]=='?' && a<p) {
       s[i]='A';
       a++;
    }
    if(s[i]=='?' && c<p) {
       s[i]='C';
       c++;
    }
    if(s[i]=='?' && g<p) {
       s[i]='G';
       g++;
    }
    if(s[i]=='?' && t<p) {
       s[i]='T';
       t++;
    }
}
cout<<s<<endl;
}
