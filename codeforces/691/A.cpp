#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a=0,b=0,c=0;
cin>>n;
for(long long i=0;i<n;i++) {
    cin>>c;
    if(c==0) {
        a++;
    }
}
//1
//cout<<a<<endl;
if(n==1 ) {
    if(a==0) {
         cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
else if(a==1) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
