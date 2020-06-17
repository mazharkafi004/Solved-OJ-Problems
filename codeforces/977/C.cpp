#include<bits/stdc++.h>

using namespace std;


int main() {

 long long n,k;
 cin>>n>>k;
 long long p[n];
 p[0]=1;
 for(long long i=1;i<=n;i++) {
    cin>>p[i];
 }
 sort(p+1,p+n+1);

 if(p[k+1]!=p[k]) {
    cout<<p[k]<<endl;
 }
 else {
    cout<<-1<<endl;
 }


}
