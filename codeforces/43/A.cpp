#include<bits/stdc++.h>

using  namespace std;

int main() {
long long a=1,b=0,c,d;
long long n;
cin>>n;
//map<string,int >n;
string s[n],t,r;
for(long long i=0;i<n;i++) {
    cin>>s[i];

    t=s[0];




}
for(long long i=1;i<n;i++) {

  if(t==s[i]) {
    a++;
  }
  else {
    r=s[i];
    b++;
  }

}
//cout<<a<<b<<endl;
if(a>b) {
    cout<<t<<endl;
}
else {
    cout<<r<<endl;
}

}
