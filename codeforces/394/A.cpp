#include<bits/stdc++.h>

using namespace std;

int main() {

  string s;
  cin>>s;
  int a=0,b=0,c,d,x,y,t,n;
  n=s.size();
  for(int i=0;i<n;i++) {
    if(s[i]=='+') {
        a=i;
    }
    else if(s[i]=='=') {
        b=i;
    }
  }
  y=b-(a+1);
  c=n-(b+1);

  if((a+y)==c) {
    cout<<s;
    cout<<endl;
  }
  else if(c>1 && ((a+y)==(c-2))) {
    for(int i=1;i<=(a+1);i++) {
        cout<<"|";
    }
    cout<<"+";
     for(int i=1;i<=y;i++) {
        cout<<"|";
    }
    cout<<"=";
     for(int i=1;i<=(c-1);i++) {
        cout<<"|";
    }
    cout<<endl;
  }
  else if(a>1  && (a+y)==(c+2)) {
    for(int i=1;i<=(a-1);i++) {
        cout<<"|";
    }
    cout<<"+";
     for(int i=1;i<=y;i++) {
        cout<<"|";
    }
    cout<<"=";
     for(int i=1;i<=(c+1);i++) {
        cout<<"|";
    }
    cout<<endl;
  }
  else if(b>1  && (a+y)==(c+2)) {
    for(int i=1;i<=(a);i++) {
        cout<<"|";
    }
    cout<<"+";
     for(int i=1;i<=y-1;i++) {
        cout<<"|";
    }
    cout<<"=";
     for(int i=1;i<=(c+1);i++) {
        cout<<"|";
    }
    cout<<endl;
  }
  else {
    cout<<"Impossible"<<endl;
  }
}
