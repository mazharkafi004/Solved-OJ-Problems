#include<bits/stdc++.h>


using namespace std;

int main() {

long long n,h,k;
cin>>n>>h>>k;
long long p[n];

long long a=0,b=0,c=0,d=0;
for(long long i=0;i<n;i++) {
   cin>>d;
     if(a+d>h) {
    a=0;

    b++;
 }
a+=d;
b+=a/k;
a=a%k;
}

 //cout<<a<<" "<<b<<endl;
if(a==0)
{

cout<<b<<endl;
}
else {
    cout<<b+1<<endl;
}
}
