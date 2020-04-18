#include<bits/stdc++.h>

using namespace std;
int main() {

long long t;
cin>>t;
long long p[100002];
for(long long i=0;i<t;i++) {
    cin>>p[i];
}
long long n;
cin>>n;
sort(p,p+t);
while(n--) {
    long long c;
cin>>c;
        long long b=0,r=t,mid;

   while(b<r) {
    mid=(b+r)/2;
    if(p[mid]<=c) {
        b=mid+1;
    }
    else {
        r=mid;
    }
   }

cout<<b<<endl;
}

}
