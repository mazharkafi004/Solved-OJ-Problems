#include<bits/stdc++.h>


using namespace std;

int main() {

long long n,a=0;
cin>>n;
string s;
cin>>s;
long long m=2*n;
vector<long long>p,q;
for(long long i=0;i<m;i++) {
    if(i<n) {
        a=s[i]-'0';
        p.push_back(a);
    }
    else {
         a=s[i]-'0';
        q.push_back(a);
    }
}
sort(p.begin(),p.end());
sort(q.begin(),q.end());
long long x=0,y=0;
if(p[0]>q[0]) {
    for(long long i=0;i<n;i++) {
        if(p[i]>q[i]) {
            x++;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(x==n) {
        cout<<"YES"<<endl;
        return 0;
    }
}
else if(p[0]<q[0]) {
    for(long long i=0;i<n;i++) {
        if(p[i]<q[i]) {
            y++;
        }
        else {
            cout<<"NO"<<endl;
            return 0;
        }
    }
     if(y==n) {
        cout<<"YES"<<endl;
        return 0;
    }
}
else {
    cout<<"NO"<<endl;
    return 0;
}
}
