#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,c,n,m,mx=0,mn=0;
cin>>n;
long long p[100002];
for(long long i=0;i<n;i++) {
    cin>>p[i];
}

cout<<(p[1]-p[0])<<" "<<(p[n-1]-p[0])<<endl;
for(long long i=1;i<n-1;i++) {

cout<<min((p[i+1]-p[i]),(p[i]-p[i-1]))<<" "<<max((p[n-1]-p[i]),(p[i]-p[0]))<<endl;
}
cout<<(p[n-1]-p[n-2])<<" "<<(p[n-1]-p[0])<<endl;
}






