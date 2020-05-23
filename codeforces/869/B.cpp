#include<bits/stdc++.h>

using namespace std;


int main() {
long long a,b,x=1,z=0;
cin>>a>>b;
//cout<<b-a<<endl;
if(b-a<10) {
    for(long long i=a+1;i<=b;i++) {
        x=x*(i%10);
        //cout<<x<<endl;
    }
    z=x%10;
    cout<<z<<endl;
}
else {
    cout<<0<<endl;
}

}
