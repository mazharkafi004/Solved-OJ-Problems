#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long a,b,q,r,sum=0;
    cin>>a>>b;
    q=b/a;
    r=b%a;
    for(int i=1;i<=a;i++) {
        if(i<=r) {
            sum=sum+((q+1)*(q+1));
        }
        else {
             sum=sum+((q)*(q));
        }
    }
    cout<<sum<<endl;
}

}
