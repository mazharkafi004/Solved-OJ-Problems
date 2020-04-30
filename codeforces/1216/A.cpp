#include<bits/stdc++.h>

using namespace std;

int main() {
long long t,a=0,b=0,m;
string s;
cin>>t;
cin>>s;
for(long long i=0;i<t;i+=2) {
    if(s[i]==s[i+1]) {
        if(s[i]=='a')
        {
            s[i]='b';
        }
        else {
            s[i]='a';
        }
        a++;
    }

}
cout<<a<<"\n"<<s<<endl;

}
