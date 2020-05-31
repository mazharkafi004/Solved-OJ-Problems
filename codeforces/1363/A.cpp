
#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long a=0,b=0,c=0,d=0,n,x;
    cin>>n>>x;
    vector<long long>p,q;
    for(long long i=0;i<n;i++) {
        cin>>c;
        if(c%2!=0) {
            a++;
        }

    }
if(a==0) {
    cout<<"NO"<<endl;
}
else {
    if(x%2==0 && n==a) {
    cout<<"NO"<<endl;
    }
    else if(a%2==0 && n==x) {
    cout<<"NO"<<endl;
    }
    else if(x%2==1 && n==a) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
}

    }

}
