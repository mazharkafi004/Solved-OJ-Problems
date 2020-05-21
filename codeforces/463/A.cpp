#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,s;
cin>>n>>s;
long long a=-1,x,y,z=0;
for(long long i=0;i<n;i++)
{
    cin>>x>>y;
    if(x<s && y!=0) {
        a=max(a,100-y);
    }
    else if(x<=s && y==0) {
        a=max(a,z);
    }
}
cout<<a<<endl;
}
