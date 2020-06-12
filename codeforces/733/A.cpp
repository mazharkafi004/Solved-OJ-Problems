#include<bits/stdc++.h>

using namespace std;


int main() {

long long a=1,m=1;
string s;
cin>>s;

for(long long i=0;i<s.size();i++) {
    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y') {
        a=1;
    }
    else {
        a++;
        if(a>m) {
            m=a;
        }
    }
}
cout<<m<<endl;
}
