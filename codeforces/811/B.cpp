#include<bits/stdc++.h>


using namespace std;


int main() {

 long long t;
 cin>>t;

    long long n;
    cin>>n;
    long long p[t],q[t];

 for(long long i=1;i<=t;i++) {
    cin>>p[i];

 }
 while(n--) {
        long long l,r,x,y=0;
        cin>>l>>r>>x;
   for(long long i=l;i<=r;i++) {
    if(p[i]<p[x]) {
        y++;
    }
   }
   if(x-y==l) {
    cout<<"Yes"<<endl;
   }
   else {
    cout<<"No"<<endl;
   }
 }

}
