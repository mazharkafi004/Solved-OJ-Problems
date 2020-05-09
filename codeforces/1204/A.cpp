#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a=0;
string s;
cin>>s;
long long m=s.size();
for(long long i=1;i<s.size();i++) {
    if(s[i]=='1') {
        a=1;
    }
}

cout<<((m-1)/2)+(max(a,((m-1)%2)))<<endl;
}
