#include<bits/stdc++.h>

using namespace std;

main() {

long long n;
string s;
cin>>n>>s;
for(long long i=1;i<=n;i++) {
    if(n%i==0) {
        reverse(s.begin(),s.begin()+i);
    }
}
cout<<s<<endl;
}
