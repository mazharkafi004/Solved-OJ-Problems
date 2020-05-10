#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin>>n;
long long a=5,b=6,c=7,x=1,y=1,z=1;
for(long long i=0;i<a;i++) {
    x=(x*(n-i))/(i+1);
}
for(long long i=0;i<b;i++) {
    y=(y*(n-i))/(i+1);
}
for(long long i=0;i<c;i++) {
    z=(z*(n-i))/(i+1);
}
cout<<x+y+z<<endl;
}
