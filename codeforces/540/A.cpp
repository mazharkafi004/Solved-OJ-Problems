#include<bits/stdc++.h>

using namespace std;


int main() {

 long long n;
 cin>>n;
 string s,t;
 cin>>s>>t;
 long long a=0,b=0,c=0,d=0,e=0;
 for(long long i=0;i<n;i++) {
    a=s[i]-'0';
    b=t[i]-'0';
  if(b>a) {
    swap(a,b);
  }
        c+=min(abs(a-b),(10+b-a));

 }
cout<<c<<endl;
}
