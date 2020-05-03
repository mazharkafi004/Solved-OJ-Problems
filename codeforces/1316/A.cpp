#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long n,m,a,s=0;
    cin>>n>>m;
    vector<long long>p;
    for(long long i=0;i<n;i++) {
        cin>>a;
        p.push_back(a);
        s+=p[i];
    }
    if(s>=m) {
        cout<<m<<endl;
    }
    else {

        cout<<s<<endl;
    }
}

}
