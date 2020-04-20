#include<bits/stdc++.h>

using namespace std;

int main() {

  long long t,i,sum=0;
  cin>>t;
long long x,y,x1,y1;
cin>>x>>y;
sum=x+y;
for(i=1;i<t;i++) {
    cin>>x1>>y1;
    sum=max(sum,(x1+y1));
}
cout<<sum<<endl;

}
