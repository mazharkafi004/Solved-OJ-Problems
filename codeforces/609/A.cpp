#include <bits/stdc++.h>

using namespace std;

int main()
{  int a[100000];
    int n,m,b=0;
  cin>>n>>m;
        for(int i=0;i<n;i++)
           cin>>a[i];
        sort(a,a+n);

        for(int i=n-1;i>=0;i--)
        {
            m-=a[i];
            b++;
            if(m<=0)break;
        }
       cout<<b<<endl;
    }

