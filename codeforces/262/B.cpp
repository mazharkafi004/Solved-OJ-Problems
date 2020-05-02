#include<bits/stdc++.h>

using namespace std;

int main() {
long long a=0,b=0,c=-1,d=0,n,k,m=0;
cin>>n>>k;
long long p[n];
for(long long i=0;i<n;i++) {
    cin>>p[i];


}
d=0;
for(long long i=0;i<n,k>0;i++) {
            if(p[i]<0 ) {
        k--;

        p[i]*=-1;

    }
else {
    break;
}


}
sort(p,p+n);
a=0;
if(k>0) {
    if(k%2==1) {
        p[0]*=-1;
    }


}
for(long long i=0;i<n;i++) {
    a+=p[i];


}
cout<<a<<endl;
return 0;
}
