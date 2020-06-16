#include<bits/stdc++.h>

using namespace std;



int main() {

long long t;
cin>>t;
while(t--) {
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
   long long a=0,b=0,c=0,d=0,e=0,f=0;
   for(long long i=0;i<n;i++) {
    if(s[i]=='1') {
        for(long long j=i+1;j<=i+k &&j<n;j++) {
            s[j]='1';
        }
         for(long long j=i-1;j>=i-k &&j>=0;j--) {
            s[j]='1';
        }
      i=i+k;
    }
   }
   //cout<<s<<endl;
   for(long long i=0;i<n;) {
    if(s[i]=='0') {
        b++;
        i+=k+1;
    }
    else {
        i++;
    }
   }
cout<<b<<endl;
}
}
