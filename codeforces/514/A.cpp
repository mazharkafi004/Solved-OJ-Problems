#include<bits/stdc++.h>


using namespace std;

int main() {
long long a=0,b=0,c=0;
string s;
cin>>s;
if(s[0]-'0'>=5  && s[0]-'0'!=9) {
a=s[0]-'0';
    b=9-a;
         if(b==1)   {
            s[0]='1';
         }
          if(b==2)   {
            s[0]='2';
         }
          if(b==3)   {
            s[0]='3';
         } if(b==4)   {
            s[0]='4';
         }
          if(b==5)   {
            s[0]='5';
         }

          if(b==0)   {
            s[0]='0';
         }
}
for(long long i=1;i<s.size();i++) {
        //cout<<s[i]<<endl;
    a=s[i]-'0';
    b=9-a;

   // cout<<a<<" "<<b<<endl;
    if(b<a) {
         if(b==1)   {
            s[i]='1';
         }
          if(b==2)   {
            s[i]='2';
         }
          if(b==3)   {
            s[i]='3';
         } if(b==4)   {
            s[i]='4';
         }
          if(b==5)   {
            s[i]='5';
         }

          if(b==0)   {
            s[i]='0';
         }

    }
}
cout<<s<<endl;
}
