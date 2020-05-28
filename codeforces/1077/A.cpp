#include<bits/stdc++.h>


using namespace std;


int main() {
long long t;
cin>>t;
while(t--) {
    long long a,b,k,x=0,y=0,m=0,n=0;
    cin>>a>>b>>k;
    if(k%2==0) {
        m=k/2;
        n=k/2;
    }
    else {
        m=(k/2)+1;
        n=k/2;
    }
    x=m*a;
    y=n*b;
    cout<<x-y<<endl;
}

}
