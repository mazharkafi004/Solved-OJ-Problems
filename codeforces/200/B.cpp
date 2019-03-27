#include<bits/stdc++.h>

using namespace std;
int main () {
float d;
float a,b=0,c,n,i;
cin>>n;
for(i=0;i<n;i++) {
    cin>>a;
    b=b+a;
}
d=b/n;
//printf("%.12f",d);
cout<<d<<endl;
}
