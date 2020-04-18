#include<bits/stdc++.h>

using namespace std;

int main() {

 long long t,n,a,b,c,d,x,y,z;
 cin>>t;
 while(t--) {
    cin>>a>>b>>c>>d;
    if(b+c>d) {
            printf("%lli %lli %lli\n",b,c,d);
        //cout<<b<<" "<<c<<" "<<d<<endl;
    }
    else if(a+b>c) {
            printf("%lli %lli %lli\n",a,b,c);
        // cout<<a<<" "<<b<<" "<<c<<endl;
    }
    else {
////        while(b+c<=d && c<d) {
////                c++;
////              d--;
////
////        }
        printf("%lli %lli %lli\n",b,c,c);
       // cout<<b<<" "<<c<<" "<<d<<endl;
    }
 }}


