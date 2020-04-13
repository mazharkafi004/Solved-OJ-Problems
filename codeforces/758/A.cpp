#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    int p[t];
    for(int i=0;i<t;i++) {
        cin>>p[i];
    }
    sort(p,p+t);
    int m=p[t-1];

    int sum=0,b;
    for(int i=0;i<t;i++) {
        b=m-p[i];
        sum+=b;
    }
    cout<<sum<<endl;



}
