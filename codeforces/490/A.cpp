#include<bits/stdc++.h>

using namespace std;

int main()  {
long long n;
cin>>n;
vector<long long>a,b,c,d;
long long p,q=0,r=0,s=0,t;
for(long long i=0;i<n;i++) {
    cin>>p;
    //cout<<p<<endl;
    if(p==1) {
        q++;
        a.push_back(i+1);
    }
    else if(p==2) {
        r++;
        b.push_back(i+1);
    }
    else if(p==3) {
        s++;
        c.push_back(i+1);
    }
}
long long e,f;
if(q<= r && q<=s) {
    e=q;
}
else if(r<= q && r<=s) {
    e=r;
}
else {
    e=s;
}
cout<<e<<endl;
for(long long i=0;i<e;i++) {
    cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
}
}
