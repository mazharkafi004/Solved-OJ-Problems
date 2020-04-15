#include<bits/stdc++.h>

using namespace std;


int main() {

 int t,n,sum=0;
 cin>>t>>n;
 int p[t];
 for(int i=0;i<t;i++) {
    cin>>p[i];
 }
 sort(p,p+t);
 for(int i=0;i<n;i++) {
    if(p[i]<=0) {
        sum=sum-p[i];
    }
 }
cout<<sum<<endl;

}
