#include<bits/stdc++.h>

using namespace std;

int main() {
long long t,a,b,p=500,sum=0;
cin>>t;
while(t--) {
    cin>>a>>b;
    if(b<p) {
        p=b;
    }
    sum+=(a*p);
}
cout<<sum<<endl;
}
