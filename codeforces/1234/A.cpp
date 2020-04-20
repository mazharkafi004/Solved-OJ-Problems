#include<bits/stdc++.h>

using namespace std;

int main() {

  long long t,n,a;
  cin>>t;
  while(t--) {
    cin>>n;
    long long p[n],sum=0;
    for(long long i=0;i<n;i++) {
        cin>>p[i];
        sum+=p[i];
    }
   a=sum%n;
   if(a==0){
    cout<<sum/n<<endl;}
    else  {
       cout<<(sum/n)+1<<endl;
    }
  }

}
