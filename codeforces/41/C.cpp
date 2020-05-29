#include<bits/stdc++.h>

using namespace std;


int main() {

long long n,m,a=0,b=1,c=0;
string s;
cin>>s;
n=s.size();
for(long long i=1;i<n-3;i++) {
    if(s[i]=='d' && s[i+1]=='o' && s[i+2]=='t') {
        s[i]='.';
        s.erase(i+1,2);
        n-=2;
    }
}
for(long long i=1;i<n-2;i++) {
    if(s[i]=='a' && s[i+1]=='t' && c<b) {
        s[i]='@';
        s.erase(i+1,1);
        n-=1;
        c++;
    }
}
cout<<s<<endl;
}
