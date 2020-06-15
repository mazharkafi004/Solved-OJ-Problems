#include<bits/stdc++.h>

using namespace std;

int main() {

long long n;
cin>>n;
long long a=0,b=0,c=0,d=0;

long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}
c=abs(p[0]-p[n-1]);
a=0,b=n-1;
for(long long i=1;i<n;i++) {
   d=abs(p[i]-p[i-1]);
   if(d<=c) {
        c=d;
    a=i;
    b=i-1;
   }
}
cout<<a+1<<" "<<b+1<<endl;

}
