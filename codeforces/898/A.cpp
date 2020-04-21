#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,t,x,a=10;
cin>>n;
t=n%a;
x=n/10;
if((n%a)==0) {
    cout<<n<<endl;
}
else {
    if(t>5) {
        x=x+1;
    }

    cout<<x*10<<endl;
}


}
