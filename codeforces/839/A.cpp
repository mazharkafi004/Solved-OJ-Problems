#include<bits/stdc++.h>
using namespace std;

int main() {

  long long a=0,b=0,c,d=8,n,t,i,x,y=0,z;
  cin>>t>>n;
  long long p[t];
  for(i=0;i<t;i++) {
    cin>>p[i];
  }
//  for(i=0;i<t;i++) {
//    cout<<p[i];
//  }
   for(i=0;i<t;i++) {

   y+=p[i];
   c=min(y,d);
   y=y-c;
    b+=c;
    a++;
    if(b>=n) {
        cout<<a<<endl;
        return 0;
    }
  }
  if(b<n) {
    cout<<-1<<endl;
  }

}
