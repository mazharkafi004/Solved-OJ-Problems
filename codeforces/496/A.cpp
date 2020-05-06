#include<bits/stdc++.h>

using namespace std;

int main () {
long long n,c,mx=0,mn=0,y=999999999;
cin>>n;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
if(n==3) {
    cout<<p[2]-p[0]<<endl;;
}
else {
    for(long long i=0;i<n-2;i++) {
    c=p[i+2]-p[i];
    y=min(y,c);
}
//5cout<<c<<endl;
mx=0;
for(long long i=0;i<n-1;i++) {
    c=p[i+1]-p[i];
    mx=max(c,mx);
}
cout<<max(y,mx)<<endl;
}

}


