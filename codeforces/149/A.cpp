#include<bits/stdc++.h>

using namespace std;

int main() {
long long k,t=12,a=0,c=0;
cin>>k;
long long n[12];
for(long long i=0;i<t;i++) {
    cin>>n[i];
}
sort(n,n+t);
if(k==0) {
    cout<<0<<endl;
    return 0;
}

for(long long i=t-1;i>=0;i--) {
    a+=n[i];
    c++;
    if(a>=k) {
        break;
    }


}
if(a<k) {
    cout<<-1<<endl;
}
else {
    cout<<c<<endl;
}

}
