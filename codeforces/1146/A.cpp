#include<bits/stdc++.h>

using namespace std;

int main() {
int a,b=0,c,d,e;
string s;
cin>>s;
a=s.size();
for(int i=0;i<a;i++) {
    if(s[i]=='a') {
        b++;
    }
}
if(b>(a/2)) {
    cout<<a<<endl;
}
else {
    cout<<b+(b-1)<<endl;
}
}
