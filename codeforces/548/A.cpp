#include<bits/stdc++.h>

using namespace std;


int main () {
long long t,n,l,h,a=0;
string s;
cin>>s;
cin>>t;
n=s.size()/t;
if(s.size()%t!=0) {
    cout<<"NO"<<endl;
    return 0;
}
for(long long i=0;i<s.size();i+=n) {
    l=i;
    h=i+(n-1);
   // cout<<l<<h<<endl;
    while(h>l) {
        if(s[l++]!=s[h--]) {
            a++;
        }
    }
}
//cout<<a<<endl;
if(a==0) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}

}
