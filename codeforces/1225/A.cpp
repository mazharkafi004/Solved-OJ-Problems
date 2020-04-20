#include<bits/stdc++.h>

using namespace std;

int main() {

 int a,b;
 cin>>a>>b;
 if(b-a>1) {
    cout<<-1<<endl;
 }
 else if(a==9 && b==1) {
    cout<<9<<" "<<10<<endl;
 }
 else if(a>b) {
    cout<<-1<<endl;
 }
 else if(a==b) {
    cout<<a<<1<<" "<<b<<2<<endl;
 }
 else {
     cout<<a<<9<<" "<<b<<0<<endl;
 }

}
