#include<bits/stdc++.h>
using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n,a=0,b=0,d;
    cin>>n;
    vector <long long > p;
    for(long long i=0;i<n;i++) {
            cin>>d;
        p.push_back(d);
    }
    d=abs(p[0]-p[1]);
    a=0;
     for(long long i=0;i<n;i++) {
            for(long long j=i;j<n;j++) {
            if(abs(p[i]-p[j])==1) {
                a++;
            }
            else {
                continue;
            }
    }
    }
    if(a==0) {
        cout<<1<<endl;
    }
    else {
         cout<<2<<endl;
    }
}


}
