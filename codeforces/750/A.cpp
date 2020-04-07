#include<bits/stdc++.h>
using namespace std;

int main() {
 int a,b,c,t,n,s=0;
 cin>>a>>t;
 c=240-t;
 if(t>=236) {
    cout<<0<<endl;
    return 0;
 }
 for(int i=1;i<=a;i++) {
    s+=i*5;
    if(s>c) {
        break;
    n=i-1;
    }
    n=i;
 }
 cout<<n<<endl;
 }



