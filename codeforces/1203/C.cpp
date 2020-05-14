#include<bits/stdc++.h>

using namespace std;

int main() {
long long n;
cin>>n;
long long a=0,b=0,c=0,d=0;
for(long long i=0;i<n;i++) {
    cin>>b;
    c=__gcd(c,b);
}

long long z=0;
//cout<<z<<endl;
for(long long i=1;i*i<=c;i++) {

  if(c%i==0) {
    z++;
     if(c/i !=i) {
    z++;
   }
  }




}
//cout<<a<<endl;

cout<<z<<endl;
}
