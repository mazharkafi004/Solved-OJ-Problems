#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,i,sum=0;
    cin>>a;
    for(i=1;i<=a;i++){
       sum+=pow(2,i);
    }
    cout<<sum<<endl;
}
