#include<bits/stdc++.h>


using namespace std;


int main() {
long long n;
cin>>n;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
sort(p,p+n);
long long m=0;
m=p[n-1]-p[0];
//cout<<m<<endl;
long long a=0,b=0,x=p[0],y=p[n-1];
for(long long i=0;i<n;i++) {
    if(p[i]==x) {
        a++;
    }
    else if(p[i]==y) {
        b++;
    }
}
if(x==y) {
    cout<<0<<" "<<(n*(n-1))/2<<endl;
}
else {
    cout<<m<<" "<<a*b<<endl;
}
}
