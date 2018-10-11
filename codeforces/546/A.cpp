#include<iostream>
using namespace std;
int main() {
int a,b,c,d,e=0,f,i;
cin>>a>>b>>c;
for(i=1;i<=c;i++) {
    e+=a*i;

}
f=e-b;
if(e>b){
cout<<f<<endl;}
else {
    cout<<0;
}
}
