#include<bits/stdc++.h>

using namespace std;

int main() {

long long t,s,x,a=0;
cin>>t>>s>>x;
a=t;
if(a==x) {
    cout<<"YES"<<endl;
    return 0;
}
//vector<long long>
long long b=0,c=0;
b=x-t;
//cout<<b-s<<endl;
//cout<<b%s<<endl;
if(b%s==0 || b%s==1 ) {
    if(b>=s) {
        cout<<"YES"<<endl;
        return 0;
    }
    else {
         cout<<"NO"<<endl;
        return 0;
    }
}
else {
    cout<<"NO"<<endl;
        return 0;
}

}
