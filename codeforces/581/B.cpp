
#include<bits/stdc++.h>

using namespace std;


int main() {
long long n;
cin>>n;
long long p[n],q[n];

for(long long i=0;i<n;i++) {
    cin>>p[i];
}

long long m=p[n-1];
for(long long i=n-2;i>=0;i--) {
    if(p[i]<=m) {
        q[i]=(m-p[i])+1;
        //m=p[i];
    }
    else {
        q[i]=0;
        m=p[i];
    }
}
q[n-1]=0;

for(long long i=0;i<n;i++) {
    cout<<q[i]<<" ";
}
cout<<endl;
}
