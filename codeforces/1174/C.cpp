#include<bits/stdc++.h>

using namespace std;

int main() {

 long long n;
 cin>>n;
   //n=n-1;
long long p[n];

for(long long i=0;i<=n;i++) {
    p[i]=0;
}
long long a=1;
for(long long i=2;i<=n;i++) {
  bool z=false;
  for(long long j=i;j<=n;j+=i) {
    if(p[j]!=0) {
        continue;
    }
    p[j]=a;
    z=true;
  }
  if(z==true) {
    a++;
  }
}
for(long long i=2;i<=n;i++) {
    cout<<p[i]<<" ";
}

}
