#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,b=0,a=0,c,d=0,i;

string s;
cin>>s;
for( i=0;i<s.size();i++) {
    a+=s[i]-'0';
}
//cout<<a<<endl;
if(s.size()==1) {
    cout<<0<<endl;
    return 0;
}

//c=to_string(n);
for( i=1;a>9;i++) {
    c=0;
    d=i;
    while(a) {
        c+=a%10;
        a=a/10;
    }
    a=c;

}


cout<<i<<endl;
}
