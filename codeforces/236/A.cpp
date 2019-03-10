#include<bits/stdc++.h>

using namespace std;

int main()
{
   int l,a=0,i; 
 
 string s; 
 
 cin>>s; 
 
 l=s.length(); 
 
 sort(s.begin(),s.end()); 
 
 for (i = 1;i<l; i++)
{ if (s[i] != s[i -1] ) 
 
   {
       a++;
   } 
 
 }
    if((a+1)%2==0) 
        { cout<<"CHAT WITH HER!"<<endl;
                 } 
 
 else { cout<<"IGNORE HIM!"<<endl;
    } 
 
 
 } 