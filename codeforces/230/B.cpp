#include<bits/stdc++.h>

using namespace std;


long long prime[1000001];


//prime[0]=0;
//for(long long i=2;i*i<=m;i++) {
//    if(prime[i]==1) {
//            cout<<prime[i]<<endl;
//        for(long long j=i*i;j<=m;j+=i) {
//            prime[j]=0;
//        }
//    }
//}

//}

int main() {
long long t;
cin>>t;
long long m=1000000;
for(long long i=2;i<=m;i++) {
    prime[i]=1;
}
prime[0]=0;
prime[1]=0;

for(long long i=2;i*i<m;i++) {
    if(prime[i]==1) {
        for(long long j=i*i;j<=m;j+=i) {
            prime[j]=0;
        }
    }
}

while(t--) {

        long long n;
       cin>>n;

      long long m=sqrt(n);

   if(m*m==n) {
       if(prime[m]==1) {
        cout<<"YES"<<endl;
      }
      else {


        cout<<"NO"<<endl;
      }
   }
   else {
    cout<<"NO"<<endl;
   }


}

}

