#include<bits/stdc++.h>

using namespace std;

int main() {

 int n,a,b=0,c=0,d=0,e=0;
 cin>>n;
 int sum=0;
 for(int i=1;i<=n;i++) {
    cin>>a;
   if(a==25) {
    b++;
   }
   else if (a==50) {
    if(b>=1) {
        c++;
        b--;
    }
    else {
        e++;

    }
   }
   else {
    if(b>0 && c>0) {
        d++;
        c--;
        b--;
    }
    else if(b>=3){

        b-=3;
    }
        else {
            e++;
        }
   }

}
if(e>=1) {
  cout<<"NO"<<endl;}
  else {
    cout<<"YES"<<endl;
  }
}
