#include<bits/stdc++.h>

using namespace std;
int main() {
int a=0,b,c,d,e,i,n;
cin>>n;
string s;
cin>>s;

for(i=0;i<n-2;i++) {
    if(s[i]=='x'&& s[i+1]=='x'&& s[i+2]=='x') {
        a++;
    }
}
cout<<a<<endl;
}
