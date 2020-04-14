#include<bits/stdc++.h>

using namespace std;

int main() {
 int n,m;
 cin>>n>>m;
 int a,b,c,d;
a=n%2;
b=n/2;
if(m>n) {
        cout<<-1<<endl;}
else {
 if(a==0 ) {
   if(b%m==0) {
    cout<<b<<endl;
    return 0;
   }
   else {
       d=b/m;
    cout<<(m)*(d+1)<<endl;
   }
}
else {
//        if(b%m==0) {
//    cout<<b+1<<endl;
//    return 0;
//   }
//   else {
       d=b/m;
    cout<<(m)*(d+1)<<endl;
   }

}}


