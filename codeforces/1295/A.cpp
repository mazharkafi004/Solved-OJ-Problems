#include<bits/stdc++.h>


using namespace std;

int main() {

long long n,t,a,b;
cin>>t;
while(t--) {
    cin>>n;
    if(n%2==0) {
        a=n/2;
        for(long long i=0;i<a;i++) {
            cout<<1;
        }
        cout<<endl;
    }

    else {
        a=n/2;
        cout<<7;
         for(long long i=1;i<a;i++) {
            cout<<1;
        }
        cout<<endl;
    }
}

}
