#include<bits/stdc++.h>

using namespace std;

int main() {

 long long t,h,m,h1,m1;
 cin>>t;
 cin>>h>>m;
long long a=1,b=1;
while(t-- && t>0) {

    cin>>h1>>m1;
    if(h1==h && m1==m) {
        b+=1;


    if(b>a) {
        a=b;
    }}
    else {
        b=1;
    }
     h=h1;
   m=m1;
}
cout<<a<<endl;
}
