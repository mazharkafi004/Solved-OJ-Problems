#include<bits/stdc++.h>

using namespace std;

int main()  {

long long n;
cin>>n;

long long a,b,c=0,d=0,e=0,f=0;
for(long long i=0;i<n;i++) {
    cin>>a>>b;
    if(a%2==0 && b%2!=0) {
        e++;
    }
    if(a%2!=0 && b%2==0) {
        f++;
    }
    c+=a;
    d+=b;
}
if(c%2==0 && d%2==0) {
    cout<<0<<endl;
}
else {
    if(c%2==d%2) {
       if(n==1) {
         cout<<-1<<endl;
       }
       else {
         if(e>=1 || f>=1) {
              cout<<1<<endl;
         }
         else {
              cout<<-1<<endl;
         }
       }
    }
    else {
        cout<<-1<<endl;
    }
}

}
