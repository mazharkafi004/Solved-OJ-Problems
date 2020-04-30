#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long a,b;
    cin>>a>>b;
    if(a>b) {
        if((a-b)%2==0) {
            cout<<1<<endl;
        }
        else {
             cout<<2<<endl;
        }
    }
    else if(b>a) {
        if((a-b)%2==0) {
            cout<<2<<endl;
        }
        else {
             cout<<1<<endl;
        }
    }
    else {
        cout<<0<<endl;
    }
}


}
