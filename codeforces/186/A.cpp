#include <bits/stdc++.h>
using namespace std;
string s,b;
int ans;
int main () { 
//int ans;
//string s,b;
cin>>s>>b;
for(int i=0; i<s.size(); i++){
if (s[i]!=b[i]){
ans++;}}

sort(s.begin(),s.end());
sort(b.begin(),b.end());

if(s==b && ans==2 ) {
cout<<"YES";}
else {
cout<<"NO";}
return  0;
}
