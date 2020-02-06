#include<bits/stdc++.h>

using namespace std;

int main () {

int n,t,a,i,b,c,d;
cin>>t;
while(t--) {

    cin>>n;
    int e=0,o=0;
    for(i=0;i<n;i++) {
            cin>>a;
    if(a%2==0) {
        e++;
    }
    else {
        o++;
    }


}
  if(o==0||(e==0&&n%2==0)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }


}}
