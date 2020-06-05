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
if(n%2==0) {
    cout<<p[(n/2)-1]<<endl;
}
else {
    cout<<p[(n/2)]<<endl;
}

}
