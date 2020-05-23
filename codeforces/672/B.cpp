#include<bits/stdc++.h>

using namespace std;


int main() {
long long n;
cin>>n;
string s;
cin>>s;
set<char >t;
for(long long i=0;i<s.size();i++) {
    t.insert(s[i]);
}
long long m=t.size();
if(n>26) {
    cout<<-1<<endl;
    return 0;
}
if(n-m<26) {
    cout<<n-m<<endl;
}
else {
    cout<<-1<<endl;
    return 0;
}
}
