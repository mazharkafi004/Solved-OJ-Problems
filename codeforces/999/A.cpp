#include<bits/stdc++.h>

using namespace std;

int main() {

long long n,k;
cin>>n>>k;
long long p[n];
long long a=0,b=0,c=0,f=0;
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
for(long long i=0;i<n;i++) {
 if(p[i]<=k) {
        p[i]=0;
    a++;
 }
 else {
    break;
 }

}
//for(long long i=0;i<n;i++) {
//    cout<<p[i]<<" ";
//}
//cout<<a<<" "<<b<<endl;
for(long long i=n-1;i>=0;i--) {
    if(p[i]<=k && p[i]!=0) {
    a++;
    //cout<<a<<"a"<<endl;
 }
 else {

    break;
 }
}
cout<<a<<endl;
}
