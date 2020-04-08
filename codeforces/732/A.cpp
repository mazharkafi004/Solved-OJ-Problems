#include<bits/stdc++.h>

using namespace std;

int main() {

 int a=1,k,r;
 cin>>k>>r;
 while((((k*a)%10)!=r) )
 {

     if(((k*a)%10)==0)  {

         cout<<a<<endl;
         return 0;

     }
     a++;


 }
 cout<<a<<endl;
}
