#include<bits/stdc++.h>

using namespace std;

int main() {
long long a,b,n=0,t,sum=0;
string s;
cin>>t>>a;
sum=a;
while(t--) {
    cin>>s;
    cin>>b;
    //cout<<b<<endl;
    if(s[0]=='+') {
        sum+=b;
    }
    else if(s[0]=='-') {
        if(b>sum) {
        n++;
        sum=sum;
    }
    else {
        sum-=b;
    }
    }
    //cout<<sum<<endl;

}
cout<<sum<<" "<<n<<endl;

}
