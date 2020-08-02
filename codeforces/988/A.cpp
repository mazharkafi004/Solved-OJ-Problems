#include<bits/stdc++.h>
using namespace std;

int main() {
long long n,k;
cin>>n>>k;
vector<long long>p,r;
map<long long,long long>q;
for(long long i=0;i<n;i++) {
    long long a;
    cin>>a;

    if(q.count(a)==0) {
        p.push_back(i+1);
        q[a]=1;
    }

}
if(p.size()<k) {
    cout<<"NO"<<endl;
}
else {
    cout<<"YES"<<endl;
    for(long long i=0;i<k;i++) {
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
}
