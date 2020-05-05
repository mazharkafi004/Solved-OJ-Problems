#include<bits/stdc++.h>

using namespace std;

int main () {

string s;
cin>>s;
long long l=0,h=0,m=s.size(),a=0;

l=0;
h=m-1;
while(l<h) {
    if(s[l++]!=s[h--]) {
        a++;
    }
}
//cout<<a<<endl;
if(a==1 ) {
    cout<<"YES"<<endl;
}
else if(a==0 && (m%2==1)) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
