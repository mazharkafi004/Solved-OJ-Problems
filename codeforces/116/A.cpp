#include<bits/stdc++.h>

using namespace std;

int main() {
int n,a,b,i,c=0,d=0;
cin>>n;
for(i=0;i<n;i++) {
    cin>>a>>b;
    c=c-a+b;
    if(c>d) {
        d=c;
    }
}
cout<<d<<endl;
}
