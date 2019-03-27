#include<bits/stdc++.h>

using namespace std;
int main () {
int a=0,b,c,i,n;
char p[100];
cin>>n;
for(i=0;i<n;i++) {
    cin>>p[i];
}
for(i=0;i<n;i++) {
   if( p[i]==p[i+1]) {
    a++;}
}
cout<<a<<endl;
}
