#include<bits/stdc++.h>

using namespace std;


int main() {

long long a,b,c,x,y,z,s1,s2,n;
cin>>a>>b>>c;
s1=(a+b+c);
 if(s1%5==0) {
    s1=s1/5;
 }
 else {
    s1=(s1/5)+1;
 }

 cin>>x>>y>>z;
 s2=(x+y+z);

 if(s2%10==0) {
    s2=s2/10;
 }
 else {
    s2=(s2/10)+1;
 }
 cin>>n;
 if(n<s1+s2) {
    cout<<"NO"<<endl;
 }
 else {
    cout<<"YES"<<endl;
 }

}
