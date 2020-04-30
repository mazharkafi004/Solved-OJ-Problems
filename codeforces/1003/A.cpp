#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
long long p[t];
for(long long i=0;i<t;i++) {
    cin>>p[i];
}
long long m=1,c=0;
for(long long i=0;i<t;i++) {
        c=0;
    for(long long j=0;j<t;j++) {
    if(p[i]==p[j]) {
        c++;
    }
    if(c>m) {
        m=c;
    }
}
}
cout<<m<<endl;


}
