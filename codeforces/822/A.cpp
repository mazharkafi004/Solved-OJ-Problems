#include<bits/stdc++.h>

 using namespace std;

 int main()

 {

   int a,b,c=1,d=1,i,j;
   cin>>a>>b;
  if(a<b) {
  for (i=1;i<=a;i++ )
        {
           c=c*i;
        }
    cout<<c<<endl;
 }
 else
 {
  for (j=1;j<=b;j++ )
        {
           d=d*j;
        }
    cout<<d<<endl;
 }
 }
