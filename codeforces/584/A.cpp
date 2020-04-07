#include<bits/stdc++.h>

using namespace std;

int main() {
 long long n,t,i;
 cin>>n>>t;
 if(n==1 && t==10) {
    cout<<-1<<endl;
 }
 else if(t==10) {
        cout<<1;
    for(i=0;i<n-1;i++) {
        cout<<0;
    }
 }
 else {
    for(i=0;i<n;i++) {
        cout<<t;
    }
 }
 cout<<"\n";

}
