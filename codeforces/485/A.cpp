#include<bits/stdc++.h>

using namespace std;

int main() {
  int a,m,x,t=100;
  cin>>a>>m;
 while(t--) {
    x=a%m;
    if(x==0) {
            cout<<"Yes"<<endl;
            return 0;

    }
    a+=x;
 }

cout<<"No"<<endl;
return 0;
}
