#include<bits/stdc++.h>

using namespace std;

int main() {
 int t,n;
 cin>>t;
 while(t--) {
    cin>>n;
    if(n<4) {
        cout<<4-n<<endl;
    }
    else {
        if(n%2==0) {
            cout<<0<<endl;
        }
        else {
            cout<<1<<endl;
        }
    }
 }

}
