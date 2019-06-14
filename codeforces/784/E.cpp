#include<bits/stdc++.h>

 using namespace std;

 int main()

 {

  int a,b,c,d,e;
  cin>>a>>b>>c>>d;
  e=((a^b)*(c+d))^((b*c)+(a^d));
  if(e>1) {
    e=1;
  }
  cout<<e<<endl;
 }