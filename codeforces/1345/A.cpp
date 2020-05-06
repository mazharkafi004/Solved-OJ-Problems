#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n,m;
    cin>>n>>m;
     if(n==2 && m==2) {
        cout<<"YES"<<endl;
    }
    else if(n==1) {
        cout<<"YES"<<endl;
    }
    else  if(m==1) {
        cout<<"YES"<<endl;
    }

    else {
        cout<<"NO"<<endl;
    }
}

}
