#include<bits/stdc++.h>

using namespace std;

int main() {
 long long a=0,b=0,c,t;
 double x,y;

cin>>t;
while(t--) {
  cin>>x>>y;
  if(x<0) {
    a++;
  }
  else {
    b++;
  }
}
c=abs(a-b);
if(a==0 ||b==0) {
    cout<<"YES"<<endl;
    return 0;
}
if(a==1 || b==1) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
