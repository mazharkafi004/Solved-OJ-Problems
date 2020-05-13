#include<bits/stdc++.h>

using namespace std;

int main() {
long long m,n=0,a=0;
string s;
cin>>m;
cin>>s;
for(long long i=0;i<m;i++) {
    if(s[i]=='8') {
        a++;
    }
}
n=m/11;
if(a<=n) {
    cout<<a<<endl;
}
else {
    cout<<n<<endl;
}
}
