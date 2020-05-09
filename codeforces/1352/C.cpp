#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--)
{
    vector<long long > p;
   long long x,y,a=0,b=0;
   cin>>x>>y;
 a=(y/x);
 b=y+a;
 while(1) {

   y=(y/x)+(y%x) ;
   if(y==1 || y<x) {
    break;
   }
   b=b+(y/x);
 }
 cout<<b<<endl;

   }


}

