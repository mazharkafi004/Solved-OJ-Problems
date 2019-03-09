#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n,a,b=0;
    cin>>n>>a;
    for(int i=1;i<=n;i++)
 {
     if(a%i==0 && (a/i)<= n)
  {
      b++; 
      }
}
    cout<<b<<endl;

 }
