#include<bits/stdc++.h>

using namespace std;

int main(){

bool a=false;
 int n,i,j,p,q;
 cin>>n;
 if(n<4){
 cout<<"-1";
 return 0;
 }
 for (i=n/7;i>=0;i--) {
    j=n-(i*7);
 if (j%4==0) {
   a=true;
 for (p=0;p<j/4;p++)
    cout<<"4";
 for (q=0;q<i;q++)
   cout<<"7";
   cout<<"";
  break;

}

}
 if(!a) cout<<"-1"<<endl;

}
