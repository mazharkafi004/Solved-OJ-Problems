#include<bits/stdc++.h>

using namespace std;

int main()  {

long long n;
cin>>n;
long long p[n],q[n];
long long a=0,b=0,c=0,d=0;

for(long long i=0;i<n;i++) {
    cin>>p[i];
    a+=p[i];
}
for(long long i=0;i<n;i++) {
    cin>>q[i];

}
sort(q,q+n);
b=q[n-1]+q[n-2];

if(a<=b) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;

}

}
