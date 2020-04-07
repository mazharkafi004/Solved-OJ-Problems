#include<bits/stdc++.h>

using namespace std;

int main() {

  long long a=0,b=1,c,n;
  cin>>n;

  if(n==0) {
    cout<<0<<" "<<0<<" "<<0<<endl;
    return 0;
  }

 else {


    while((n-(a+b)>0)) {


           c=b;
           b=(a+b);
           a=c;


    }

 }

  cout<<0<<" "<<a<<" "<<b<<endl;


}
