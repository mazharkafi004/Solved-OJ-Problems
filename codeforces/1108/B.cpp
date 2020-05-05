#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c=0,d=0,n,x=0,y=0;
cin>>n;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
sort(p,p+n);
x=p[n-1];
if(x==p[n-2]) {
    y=p[n-2];
}
else {
        for(long long i=0;i<n;i++) {
   if(p[i]==p[i+1]) {
    c=p[i];
    d++;
   }
}
for(long long i=n-2;i>=0;i--) {
    if(x%p[i]!=0) {
        y=p[i];
        break;
    }
}
if(y==0) {
    if(d==0) {
        y==1;
    }
    else {
        y=c;
    }
}
}

cout<<x<<" "<<y<<endl;

}
