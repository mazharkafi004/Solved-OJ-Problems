#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,m,t,c;
vector<long long>p;
set<long long>s;
cin>>n;
cin>>m;
for(long long i=0;i<m;i++) {
    cin>>c;
    p.push_back(c);
}
cin>>t;
for(long long i=m;i<m+t;i++) {
    cin>>c;
    p.push_back(c);
}
for(long long i=0;i<p.size();i++) {
   s.insert(p[i]);
}
if(s.size()==n) {
    cout<<"I become the guy."<<endl;
}
else {
    cout<<"Oh, my keyboard!"<<endl;
}
}
