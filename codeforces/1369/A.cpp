#include<bits/stdc++.h>

using namespace std;

int main() {

 long long t;
 cin>>t;
 while(t--) {
    long long n;
    cin>>n;
    if(n%2!=0 ) {
        cout<<"NO"<<endl;
    }
    else {
        if((n/2)%2==0) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
 }

}
