#include<bits/stdc++.h>

using namespace std;

main() { 
int n,count=0;
string s;
cin>>n;
cin>>s;
set<int>p;
for(int i=0;i<s.length();i++) {
    s[i]=tolower(s[i]);
}
int x=s[0]-'a';
for (int i = 0; i < n; i++)
{
    p.insert(s[i]-'a');
}
if(p.size()==26) {
cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}