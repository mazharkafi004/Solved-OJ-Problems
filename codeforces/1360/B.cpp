#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n;
    cin>>n;
    vector<long long>p;
    for(long long i=0;i<n;i++) {
        long long c;
        cin>>c;
        p.push_back(c);
    }
    long long m=10000000,u=10000000,q=0;
     for(long long i=0;i<n;i++) {
         for(long long j=0;j<n;j++) {
       if(j!=i) {
            q=0;

        q=abs(p[i]-p[j]);
       // cout<<p[i]<<" "<<p[j]<<" "<<q<<" "<<m<<endl;

        if(q<=m) {
            m=q;
        }
       }
    }
    }
    if(m==u) {
        m=(p[1]-p[0])-'0';
    }
    cout<<m<<endl;
}
}
