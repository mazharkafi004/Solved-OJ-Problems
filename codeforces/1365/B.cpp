#include<bits/stdc++.h>

using namespace std;

int main() {

long long t;
cin>>t;
while(t--) {
    long long n;
      long long a=0,b=0,c=0;
    cin>>n;
    long long p[n],q[n];
    for(long long i=0;i<n;i++) {
        cin>>p[i];
    }
     for(long long i=0;i<n;i++) {
        cin>>q[i];
        if(q[i]==0) {
            a++;
        }
        else {
            b++;
        }
    }


     for(long long i=1;i<n;i++) {

        if(p[i]>=p[i-1]) {
            c++;
        }
    }

   // cout<<a<<" "<<b<<endl;
    if(c==n-1) {
        cout<<"YES"<<endl;
    }
    else {
     if(a!=0 && b!=0) {
        cout<<"YES"<<endl;
     }
     else {
        cout<<"NO"<<endl;
     }
    }
}

}
