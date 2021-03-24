#include<bits/stdc++.h>

using namespace std;
main() {
int t;
cin>>t;
while(t--) {
    int n,k,s=0;
    cin>>n>>k;
    int p[n],q[n];
    for(int i=0;i<n;i++) {
        cin>>p[i];
    }
    for(int i=0;i<n;i++) {
        cin>>q[i];
    }
    sort(p,p+n);
    sort(q,q+n,greater<int>());
    for(int i=0;i<k;i++) {
        p[i]=max(p[i],q[i]);
    }
     for(int i=0;i<n;i++) {
       s+=p[i];
    }
    cout<<s<<endl;
}

}
