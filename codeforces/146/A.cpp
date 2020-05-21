#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a=0,b=0,c=0,d=0;
cin>>n;
n=n/2;
string s;
cin>>s;
for(long long i=0;i<n;i++) {
      d=s[i]-'0';
   if(d==4 || d==7) {
          a+=s[i]-'0';

   }
   else {
    cout<<"NO"<<endl;
    return 0;
   }


//cout<<a<<endl;

}
for(long long i=n;i<n+n;i++) {
   c=s[i]-'0';
   if(c==4 || c==7) {
          b+=s[i]-'0';

   }
   else {
    cout<<"NO"<<endl;
    return 0;
   }


//cout<<b<<endl;

}
if(a==b) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
