#include<bits/stdc++.h>

using namespace std;

int main() {

long long n;
cin>>n;

long long p[n],q[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
    q[i]=p[i];
}
sort(p,p+n);
long long a=0;
for(long long i=1;i<n;i++) {
    if(p[i]==p[0]){
        a++;
        break;
    }
}
if(a==0) {
    for(long long i=0;i<n;i++) {
    if(q[i]==p[0]){
      cout<<i+1<<endl;
      return 0;
    }
}
}
else {
    cout<<"Still Rozdil"<<endl;
}
}
