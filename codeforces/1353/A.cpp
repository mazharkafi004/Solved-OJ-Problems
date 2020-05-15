#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long a,b;
    cin>>a>>b;
    if(a==2) {
        cout<<b<<endl;
    }
    else if(a==1) {
        cout<<0<<endl;
    }
    else {
        cout<<b+b<<endl;
    }
}

}
