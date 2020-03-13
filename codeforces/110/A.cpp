#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int a,c=0,y=0;
 
   cin>>a;
 while(a>0){
       y=a%10;
       if(y!=0){
        if(y==4||y==7)
               c++;
       }
        a=a/10;
}

if(c==0)
   cout<<"NO"<<endl;
else if(c==4||c==7||c==74||c==47||c==477||c==774||c==747||c==474||c==744||c==447)
   cout<<"YES"<<endl;
 else
   cout<<"NO"<<endl;
 
}