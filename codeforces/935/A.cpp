#include<bits/stdc++.h>

using namespace std;

int main() {
long long a=0,b,n;
cin>>n;
for(long long i=2;i<=n;i++){
    if(n%i==0) {
        a++;
    }
}
cout<<a<<endl;

}
