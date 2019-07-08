#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int x[10000];
   cin>>a>>b;
   int c,d=0,i;
   c=5-b;
   for(i=0;i<a;i++) {
    cin>>x[i];
    if(x[i]<=c) {
        d++;
    }
   }
   cout<<d/3<<endl;
    }
