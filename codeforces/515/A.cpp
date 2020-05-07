#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,s,n,m;
cin>>a>>b>>s;
m=s-(abs(a)+abs(b));
//cout<<m<<endl;
if(m<0) {
    cout<<"NO"<<endl;
    return 0;
}
if(m%2==0) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}


}
