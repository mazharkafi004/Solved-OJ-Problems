#include<bits/stdc++.h>

using namespace std;

int main() {
long long n;
cin>>n;
long long a=0,c=0;
for(long long i=1;i<=n;i++) {
    for(long long j=i;j<=n;j++) {
        c=i^j;
        if(c>j && c<=n ) {
            if(i+j>c) {
                a++;
            }
        }
    }
}
cout<<a<<endl;

}
