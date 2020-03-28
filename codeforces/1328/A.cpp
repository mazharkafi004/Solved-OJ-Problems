#include<bits/stdc++.h>

using namespace std; 
int main() {
 int a,b,c,d,e,n,t;
 cin>>t;
 while(t--)
 {
 cin>>a>>b;
 if(a%b==0) { 
 cout<<0<<endl;

}

else { 
c=a/b;
 d=(c+1)*b;
 e=d-a;
 cout<<e<<endl;

}


}


 }