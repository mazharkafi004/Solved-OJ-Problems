#include<bits/stdc++.h>

using namespace std;

int main() {

long long n;
cin>>n;
long long a=n,b=0,c=0;
long long p[n];

for(long long i=0;i<n;i++) {
    cin>>p[i];
}

for(long long i=n-1;i>=0;i--) {
 if(i<a) {
    b++;
 }
 a=max(min(a,i-p[i]),c);


}
cout<<b<<endl;
}
