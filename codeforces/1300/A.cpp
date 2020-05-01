#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n,a,sum=0,b=0,c=0,d=0;
    cin>>n;
   long long p[n];
    for(long long i=0;i<n;i++) {
        cin>>p[i];
        if(p[i]==0) {
            b++;
            p[i]=1;


        }


        sum+=p[i];



    }
    //cout<<sum<<endl;
    if(sum==0) {
        cout<<b+1<<endl;
    }
    else {
        cout<<b<<endl;
    }
}
}
