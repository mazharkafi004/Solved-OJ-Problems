#include<bits/stdc++.h>

using namespace std;


int main() {

int a=0;
string s,t;
cin>>s;
for(int i=0;i<5;i++) {
    cin>>t;
    if(s[0]==t[0] || s[1]==t[1]) {
        a++;
    }
}
if(a==0) {
      cout<<"NO"<<endl;
}
else {
        cout<<"YES"<<endl;
}



}
