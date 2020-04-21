#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c,d,t,n;
cin>>n>>t;
long long p[t];
cin>>p[0];
//cout<<p[0];
long long sum=0;
sum=sum+p[0];
//cout<<sum<<endl;
for(long long i=1;i<t;i++) {
    cin>>p[i];
    if(p[i]>p[i-1]) {
        sum=sum+(p[i]-p[i-1]);
    }
    else if(p[i]==p[i-1]) {
        sum=sum;
    }
    else {
        sum=(n-p[i-1])+p[i]+sum;
    }
}
cout<<sum-1<<endl;

}
