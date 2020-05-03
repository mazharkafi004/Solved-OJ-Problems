#include<bits/stdc++.h>

using namespace std;
int main() {
long long t;
cin>>t;
while(t--) {
    long long n,a,b;
    cin>>n;
    vector<long long> p,q;
    for(long long i=0;i<n;i++) {
        cin>>a;
        p.push_back(a);
    }
    for(long long i=0;i<n;i++) {
        cin>>b;
        q.push_back(b);
    }
    sort(p.begin(),p.end());
    sort(q.begin(),q.end());
      for(long long i=0;i<n;i++) {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    for(long long i=0;i<n;i++) {
        cout<<q[i]<<" ";
    }
    cout<<endl;
}

}
