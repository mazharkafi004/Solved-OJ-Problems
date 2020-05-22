#include<bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r", stdin);
      freopen("output.txt","w", stdout);
long long t;
cin>>t;
string s;
cin>>s;
for(long long i=0;i<t/2;i++) {
    if(s[i]==s[(t/2)+i]) {
        cout<<i+1<<" "<<(t/2)+i+1<<endl;
    }
    else if(s[i]=='L' && s[(t/2)+i]=='R') {
        cout<<i+1<<" "<<(t/2)+i+1<<endl;
    }
    else if(s[i]=='R' && s[(t/2)+i]=='L') {
        cout<<(t/2)+i+1<<" "<<i+1<<endl;
    }
}

}
