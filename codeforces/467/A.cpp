#include<bits/stdc++.h>

using namespace std;
int main () {
int a=0,b,c,i,n,p,q;
cin>>n;
for(i=0;i<n;i++) {
    cin>>p>>q;
    if(q-(p+2)>=0) {
        a++;
    }
}
cout<<a<<endl;
}
