#include<bits/stdc++.h>

using namespace std;


int main() {
long long n,a,t,b;
cin>>t;
while(t--) {
cin>>n;
a=0;
b=0;
if(n==1) {
    cout<<0<<endl;
}
else {
while(n!=1) {


   if(n%5==0) {
       n=((4*n)/5) ;
       a++;
    }
    else   if(n%3==0) {
       n=((2*n)/3) ;
       a++;
    }
   else  if(n%2==0) {
       n=(n/2) ;
       a++;
    }
    else {
       a=-1;
       break;
    }


}
//if(a==0) {
//    cout<<-1<<endl;
//} else {
cout<<a<<endl;

}}
}
