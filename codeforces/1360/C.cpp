#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n;
    cin>>n;
  long long p[n];
  long long a=0,b=0,c=0;
    for(long long i=0;i<n;i++) {

       cin>>p[i];
       if(p[i]%2==0) {
        a++;
       }
       else {
        b++;
       }
    }

    sort(p,p+n);

    if(a%2==0 && b%2==0) {
        cout<<"YES"<<endl;
    }
    else {
        for(long long i=0;i<n-1;i++) {
            if(p[i+1]==p[i]+1) {
                c++;
                break;
            }
        }
        if(c<=0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }


}


}
