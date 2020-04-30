#include<bits/stdc++.h>

using namespace std;

int main() {
 string s;
 int a,b,c,f;
getline(cin,s);
 set<char> t;
 a=s.length();
for(int i=0;i<a;i++) {
    if(s[i]>='a' && s[i]<='z' ) {
        t.insert(s[i]);
    }
}
cout<<t.size()<<endl;
}
