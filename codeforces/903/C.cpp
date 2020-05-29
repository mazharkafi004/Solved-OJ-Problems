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
long long a=1,b=0,c=0,d=0;
for(long long i=n-2;i>=0;i--) {
    if(p[n-1]==p[i]) {
        a++;
    }
    else {
        break;
    }
}
long long m=0;
for(long long i=0;i<n;i++) {

 for(long long j=0;j<n;j++) {

    if(p[i]==p[j]) {
        b++;
    }

}
//cout<<b<<endl;
if(b>m) {
    m=b;
}
b=0;
}
//cout<<m<<" "<<a<<endl;
cout<<max(m,a)<<endl;
}
