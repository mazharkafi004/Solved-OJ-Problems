#include<bits/stdc++.h>
using namespace std;
int main() {
int a,b=0,c=0,n,i;
int p[101];
int q[101];
int x[101];
cin>>n;
for(i=0;i<n;i++) {
    cin>>x[i];
    if(x[i]>0) {
        p[i]=x[i];
        b+=p[i];
    }
    else {
        q[i]=x[i];
        c+=q[i];
    }
}
cout<<b-c<<endl;
}
