#include<bits/stdc++.h>
using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n,a=0,b=0,c=0,d=0,e=0;
    cin>>n;
    long long p[n];
    for(long long i=0;i<n;i++) {
        cin>>p[i];
        if(p[i]%2==0) {
                d++;
            a=i+1;
        }
        else {
            e++;
            if(e==1) {
                b=i+1;
            }
            else if(e==2) {
                c=i+1;
            }
        }
    }
    if(d>0) {
        cout<<1<<endl;
        cout<<a<<endl;
    }
    else if(e>=2) {
        cout<<2<<endl;
        cout<<b<<" "<<c<<endl;
    }
    else {
        cout<<-1<<endl;
    }

}

}
