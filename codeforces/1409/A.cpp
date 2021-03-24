#include<bits/stdc++.h>

using namespace std;

main() {
int t;
cin>>t;
while(t--) {
    long long a,b,c,d,z,x;
    cin>>a>>b;
    c=max(a,b);
    d=min(a,b);
    z=((c-d)/10);
if(z*10<(c-d)) {
    z=z+1;
}
    cout<<z<<endl;
}

}
