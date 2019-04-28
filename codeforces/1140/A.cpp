#include <bits/stdc++.h>
using namespace std;
int main(){
    int p=0,n,i,j,a=0;
    cin>>n;
   int x[n];
for(i=1;i<=n;i++)
{
    cin>>x[i];

    }
j=x[1];
  for(i=1;i<=n;i++)
    {
        if(x[i]>j) {
          j= x[i];
        }

        if(i==j) {
          p++;
        }
    }
cout<<p<<endl;
}
