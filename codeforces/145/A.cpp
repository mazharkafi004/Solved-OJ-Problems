#include<bits/stdc++.h>

using namespace std;

int main() {
string s,t;
cin>>s>>t;
long long m=s.size(),a=0,b=0;
for(long long i=0;i<m;i++) {
    if(s[i]=='4' && t[i]=='7') {
        a++;
    }
    else if(s[i]=='7' && t[i]=='4') {
        b++;
    }
}
cout<<max(a,b)<<endl;

}
