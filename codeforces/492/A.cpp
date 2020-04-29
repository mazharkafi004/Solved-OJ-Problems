#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a=0,c=0;
cin>>n;
for(long long i=1;i<=n;i++) {
    a=a+i;
    n=n-a;

  if(n==0) {
        c++;
        break;
    }
    else if(n<0) {
        break;
    }
    c++;
}

cout<<c<<endl;
}
