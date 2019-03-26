#include<bits/stdc++.h>


using namespace std;

int main() {

long long n,k,i,b,c,max;
 int f[10000];
    int t[10000];
cin>>n>>k;
for(i=1;i<=n;i++) {
    cin>>f[i];
    cin>>t[i];
}
for(i=1;i<=n;i++) {
    if(t[1]>k) {
        c=f[1]-(t[1]-k);
    }
    else {
        c=f[1];
    }
}
max=0;
for(i=1;i<=n;i++) {
    if(t[i]>k) {
        b=f[i]-(t[i]-k);

        if(b>max) {
            max=b;
        }
        else if(b<0) {
            max=b;
        }
    }
    else {
        b=f[i];
        if(b>max) {
           max=b;
        }
          else if(b<0) {
            max=b;
        }
    }
    if(max>c) {
        c=max;
    }
}
cout<<c<<endl;
}