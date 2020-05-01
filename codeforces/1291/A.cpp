#include<bits/stdc++.h>

using namespace std;

int main() {
int t;
cin>>t;
while(t--){
string s,t;
int n,a=0,b,c;
cin>>n;
cin>>s;
for(int i=0;i<s.size();i++) {
    if(s[i]%2!=0) {
    a++;

}}
if(a<2) {
    cout<<-1<<endl;
}
else {
    int b=0;
    for(int i=0;i<s.size();i++) {
    if(s[i]%2!=0) {
            cout<<s[i];
    b++;
   if(b==2) {
    break;
   }
}

}
cout<<endl;
}
}}
