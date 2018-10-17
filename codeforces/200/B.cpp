#include<iostream>
using namespace std;

int main() {
    float n,a,b,d=0,i;
    cin>>n;
    for(i=1;i<=n;i++) {
        cin>>a;
       d=d+a;
    }
    b=d/n;
    cout<<b<<endl;
}
