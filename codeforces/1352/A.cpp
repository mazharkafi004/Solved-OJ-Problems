#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n,a,b,c,d,e,f,g=4,h=3,k=2;;
    cin>>n;
   if(n%1000==0) {
    cout<<1<<endl;
    cout<<n<<endl;
   }
   else {
    a=n%1000;
    b=n-a;
    if(a%100==0) {
            if(b==0) {
                cout<<1<<endl;
                cout<<a<<endl;
            }
            else {
                cout<<2<<endl;
                cout<<b<<" "<<a<<endl;
            }
   }
    else {
    c=a%100;
    d=a-c;
    if(c%10==0) {
            if(d==0 &&b==0) {
                cout<<1<<endl;
    cout<<c<<endl;
            }
           else if(d==0 &&b!=0) {
                cout<<2<<endl;
    cout<<b<<" "<<c<<endl;
            }
            else if(d!=0 &&b==0) {
                cout<<2<<endl;
    cout<<d<<" "<<c<<endl;
            }
            else {

                cout<<3<<endl;
    cout<<b<<" "<<d<<" "<<c<<endl;

            }


   }
    else {
    e=c%10;
    f=c-e;
    if(e%1==0 ) {
            if(d==0 &&b==0 &&f==0) {
                cout<<1<<endl;
    cout<<e<<endl;
            }
           else if(d==0 &&b==0 &&f!=0) {
                cout<<2<<endl;
    cout<<f<<" "<<e<<endl;
            }
            else if(d==0 &&b!=0 &&f==0) {
                cout<<2<<endl;
    cout<<b<<" "<<e<<endl;
            }
            else if(d!=0 &&b==0 &&f==0) {
                cout<<2<<endl;
    cout<<d<<" "<<e<<endl;
            }
            else if(d!=0 &&b!=0 &&f==0) {
                cout<<3<<endl;
    cout<<b<<" "<<d<<" "<<c<<endl;
            }
            else if(d==0 &&b!=0 &&f!=0) {
                cout<<3<<endl;
    cout<<b<<" "<<f<<" "<<e<<endl;
            }
            else if(d!=0 &&b==0 &&f!=0) {
                cout<<3<<endl;
    cout<<d<<" "<<f<<" "<<e<<endl;
            }
            else {

                cout<<4<<endl;
    cout<<b<<" "<<d<<" "<<f<<" "<<e<<endl;

            }
   }
   }
   }
}
}
}
