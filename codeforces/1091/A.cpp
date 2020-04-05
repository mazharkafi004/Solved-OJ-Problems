#include<bits/stdc++.h>
using namespace std;
int main() {
int a,b,c,m;
cin>>a>>b>>c;
if(a<=b && a<=c) {
m=a;}
else if(b<=a && b<=c) {
m=b;}
else {
m=c; }
if(a==b & a==c) {
cout<<(3*c)-3<<endl;
return 0;}
if(a==m) {
 if(a+1<=b && a+2<=c) {
cout<<a+a+a+3<<endl;
}
else if(a+1<=b && a+2>c) {
cout<<(3*c)-3<<endl;}
else {
cout<<(3*b)<<endl;}}
else if(b==m) {
 if(b-1<=a && b+1<=c) {
cout<<3*b<<endl;}
else if(b-1<=a && b+1>c){
cout<<(3*c)-3<<endl;}
else {
cout<<(3*a)+3<<endl;}}

else if(c==m) { 
if(c-1<=b && c-2<=a) {
cout<<(3*c)-3<<endl;
}
else if(c-1<=b && c-2>a) {
cout<<(3*a)+3<<endl;
}

else {
cout<<3*b<<endl;
}
}
}