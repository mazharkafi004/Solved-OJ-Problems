#include<bits/stdc++.h>

using namespace std;

int main() {

 long long n;
 cin>>n;
 long long p[n+1];
 for(long long i=1;i<=n;i++) {
    cin>>p[i];
 }
 sort(p+1,p+n+1);

 long long a=0,b=0;

  for(long long i=1;i<=n;i++) {
   a+=abs(i-p[i]);
 }
cout<<a<<endl;

}
