#include<bits/stdc++.h>

using namespace std;

int main() {

long long n;
cin>>n;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
sort(p,p+n);
long long a=0,b=0,c=0;

for(long long i=0;i<n;i++) {
  a++;
 // cout<<p[i]<<" "<<a<<endl;
  if(p[i]>=a) {
    b++;
  }
  else {
    a--;
  }

}
cout<<b<<endl;
}
