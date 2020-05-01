#include<bits/stdc++.h>

using namespace std;

int main() {

long long t;
cin>>t;
while(t--) {
    long long n,sum1=0,sum2=0,sum=0;
    cin>>n;
    long long m=n/2,p=n/4;;
    //cout<<m<<p<<endl;
    for(long long i=1;i<m;i++){
        sum1+=pow(2,i);
    }
   // cout<<sum1<<endl;
     for(long long i=m;i<=n-1;i++){
        sum2+=pow(2,i);
    }
     // cout<<sum2<<endl;
//cout<<sum1<<endl;
    sum=(pow(2,n));
    sum1=sum1+sum;
  //  cout<<sum1<<endl;
    cout<<sum1-sum2<<endl;
}
}
