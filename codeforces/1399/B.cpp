#include<bits/stdc++.h>

using namespace std;

main() {
int t;
cin>>t;
while(t--) {
    long long n,s=0;
    cin>>n;
    int p[n],q[n],a[n],b[n];
    for(int i=0;i<n;i++) {
        cin>>p[i];
        a[i]=p[i];
    }
      for(int i=0;i<n;i++) {
        cin>>q[i];
         b[i]=q[i];
    }
    sort(a,a+n);
    sort(b,b+n);

     for(int i=0;i<n;i++) {
        s+=max((p[i]-a[0]),(q[i]-b[0]));
    }
    cout<<s<<endl;

}


}
