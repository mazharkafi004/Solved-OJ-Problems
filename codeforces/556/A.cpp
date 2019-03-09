#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s;
  int a,b=0,c=0,d=0,n,i;
  cin>>n;
  cin>>s;
  for(i=0;i<n;i++) {
    if(s[i]=='0') {
        b++;

    }
    else  {
        c++;

    }
  }
  if(b>c) {
    cout<<b-c<<endl;
  }
  else  if(c>b) {
    cout<<c-b<<endl;
  }
  else {
    cout<<d<<endl;
  }

    }
