#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,m,a=0,b=0,c,d;
cin>>n>>m;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];
    d=p[i]%m;
    if(d==0) {
      a=p[i]/m;
    }
    else {
        a=(p[i]/m)+1;
    }

    //cout<<a<<b<<endl;
    if(a>=b) {
        b=a;
        c=i;
    }
}
cout<<c+1<<endl;

}




