#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,m;
cin>>n>>m;
if(n%m==0) {
    for(long long i=0;i<m;i++) {
        cout<<(n/m)<<" ";
    }
    cout<<endl;
}

else {
        long long a=0,b=0;
    a=n%m;
    b=n/m;
for(long long i=0;i<(m-a);i++) {
        cout<<(n/m)<<" ";
    }
    for(long long i=0;i<a;i++) {
        cout<<(n/m)+1<<" ";
    }

    cout<<endl;


}

}
