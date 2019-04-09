#include<bits/stdc++.h>

using namespace std;
int main() {
int n,a,b=0,c=0,i;
cin>>n;
  for(int i=1;i<=n;i++)
    {
         b+=i*(n-i);
         c=n+b;
    }

    cout<<c<<endl;
}
