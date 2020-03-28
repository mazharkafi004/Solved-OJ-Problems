#include<bits/stdc++.h>

using namespace std; 
int main() {
 int n,sum=0,s,d,i;
 cin>>n;
 int p[n];
 for(i=0;i<n-1;i++) {
 cin>>p[i];}

 cin>>s>>d;

 for(i=s-1;i<d-1;i++) {
sum+=p[i];}

 cout<<sum<<endl;




 }