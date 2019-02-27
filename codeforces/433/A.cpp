#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,p=0,q=0;
  cin>>n;
    for(int i=0;i<n; i++)
    {
        cin>>a;

     p += a==100;
     q += a==200;

    }
q= q%2;
p=p-(2*q);

if (p%2==0&&p>=0) {
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}

}
