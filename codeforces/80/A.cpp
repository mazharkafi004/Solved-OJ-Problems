#include<bits/stdc++.h>

using namespace std;

int main() {

 int p[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
 int n,m,a,b,c;
 cin>>n>>m;
 for(int i=0;i<16;i++) {
    if(p[i]==n) {
        a=i;
    }
 }
 if(p[a+1]==m) {
    cout<<"YES"<<endl;
 }
 else {
    cout<<"NO"<<endl;
 }
}
