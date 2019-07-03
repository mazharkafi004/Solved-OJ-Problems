#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,d;
     cin>>a>>b>>c;
     d= abs(a-b);
     if(c>0 && c>=d)
     {
         cout<<"?"<<endl;
         return 0;
     }
     if(a>b)
     {
         cout<<"+"<<endl;
     }
     if(b>a)
     {
         cout<<"-"<<endl;
     }
     if(a==b)
     {
         cout<<"0"<<endl;
     }
     return 0;
 
}