#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a=0,b=0,c=0,d=0;
cin>>n;
long long p[n],q[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
    q[i]=p[i];
}
sort(q,q+n);
for(long long i=0;i<n;i++) {
    if(q[0]==p[i]) {
        a=i+1;
    }
}
for(long long i=n-1;i>=0;i--) {
        c++;
    if(q[n-1]==p[i]) {
        b=i+1;
    }
}
if(a<b) {
    cout<<(n-a)+(b-1)-1<<endl;
}
else {
    cout<<(n-a)+(b-1)<<endl;
}
//cout<<a<<" "<<b<<endl;
}
