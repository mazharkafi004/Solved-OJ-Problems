#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,b,d,sum=0,c=0;
cin>>n>>b>>d;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
    if(p[i]<=b) {
        sum+=p[i];
        if(sum>d) {
            c++;
            sum=0;
        }
    }
}
cout<<c<<endl;
}
