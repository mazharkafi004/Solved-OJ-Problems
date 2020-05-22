#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n;
    cin>>n;
    long long p[n];
    for(long long i=0;i<n;i++) {
        cin>>p[i];
    }
    long long a=0;
    long long b=p[n-1];
     for(long long j=n-2;j>=0;j--) {
       if(p[j] <= b) {
        b=p[j];

       }
       else {
        a++;
       }

    }
    cout<<a<<endl;
}

}
