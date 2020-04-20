#include<bits/stdc++.h>

using namespace std;

int main() {

 long long n,m,x,y,z;
 cin>>n>>m;
 if(n==1 && m==1 ) {
    cout<<1<<endl;
 }
 else {
    x=m+1;
    y=m-1;
    if(y>=n-x+1) {
        cout<<y<<endl;
    }
    else {
        cout<<x<<endl;
    }
 }

}
