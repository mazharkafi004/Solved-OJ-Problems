#include<bits/stdc++.h>
using namespace std;


int main() {
long long n;
cin>>n;
long long p[n],q[n],r[n];
set<long long>s;
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
for(long long i=0;i<n;i++) {
    cin>>q[i];
}
long long a=0,b=0,c=0;
for(long long i=0;i<n;i++) {
   if(p[i]==q[i]) {
    r[i]=p[i];
    s.insert(p[i]);
    b+=p[i];
   }
   else {
    r[i]=0;
    a++;
   }
}
if(a==2) {
    for(long long i=0;i<n;i++) {
   if(r[i]==0) {
    if(s.find(p[i])==s.end() &&s.find(q[i])!=s.end()) {
        r[i]=p[i];
        s.insert(p[i]);
    }
    else if(s.find(p[i])!=s.end() &&s.find(q[i])==s.end()) {
        r[i]=q[i];
        s.insert(q[i]);
    }
   }
}
for(long long i=0;i<n;i++) {
   if(r[i]==0) {
    if(s.find(p[i])==s.end()) {
        r[i]=p[i];
        s.insert(p[i]);
    }
    else {
         r[i]=q[i];
        s.insert(q[i]);
    }
   }
}
}
else {
   for(long long i=0;i<n;i++) {
   if(p[i]!=q[i]) {
    r[i]=((n*(n+1))/2)-b;
   }
}
}
for(long long i=0;i<n-1;i++) {
    cout<<r[i]<<" ";
}
cout<<r[n-1]<<endl;
}
