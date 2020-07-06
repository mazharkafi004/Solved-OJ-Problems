#include<bits/stdc++.h>

using  namespace std;

int main() {

  long long n,a=0,b=0,c=0,x=0,y=0,z=0;
  long long t=8;
  string s;
  while(t--) {
    cin>>s;
    for(long long i=0;i<7;i++) {
        if(s[i]=='W' &&s[i+1]=='W') {
            a=1;
        }
        else   if(s[i]=='B' &&s[i+1]=='B') {
            a=1;
        }
    }
  }
  if(a==1) {
    cout<<"NO"<<endl;
  }
  else {
    cout<<"YES"<<endl;
  }

}
