#include<bits/stdc++.h>

using namespace std;


int main() {

 long long n,t,h,m,a=0,sum=0;;
 cin>>t;
 long long p[t];
 long long q[t];

   for(int i=0;i<t;i++) {
    cin>>p[i];
    sum+=p[i];
    if(p[i]%2!=0) {
        a++;

        }
    }

   if(a%2==0) {
    cout<<sum<<endl;
   }
   else { //999999999
   sort(p,p+t);
   for(int i=0;i<t;i++) {
    if(p[i]%2==1) {
        m=p[i];
        break;
    }
   }
   cout<<sum-m<<endl;
   }



}
