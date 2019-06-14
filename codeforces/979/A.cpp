#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b;
    cin>>a;
    if(a==0)
    {
        cout<<0<<endl;
        return 0;
    }
    b=a+1;
    if(b%2==0)
    {
        cout<<b/2<<endl;
    }
    else
        cout<<b<<endl;
}
