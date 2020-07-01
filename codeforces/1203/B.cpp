#include<bits/stdc++.h>

using  namespace std;


int main() {

long long t;
cin>>t;
while(t--) {
    long long n;
    long long j=0,b=0,c=0,a=0;
    cin>>n;
    n=n*4;
    long long p[n];


  for(long long i=0;i<n;i++) {
    cin>>p[i];
  }
  sort(p,p+n);

  if(n==4) {
    if(p[0]==p[1] && p[2]==p[3]) {
        cout<<"YES"<<endl;
    }
    else {
         cout<<"NO"<<endl;
    }
  }
  else {
 long long i=0;
    while(1) {

    if(n<=i) {
        break;
    }
            b++;
    if(p[i]==p[i+1] && p[n-1]==p[n-2]) {

    if(b==1) {
        c=p[i]*p[n-1];

        i=i+2;

  n=n-2;

    }
    else {
        a=   p[i]*p[n-1];

        i=i+2;

  n=n-2;

  if(a!=c) {
        j=1;
    break;
  }
    }

    }
    else {
        j=1;
        break;
    }
    if(j==1) {
    break;}
    }
if(j==1) {
         cout<<"NO"<<endl;
}
else {
         cout<<"YES"<<endl;
}
  }

}

}
