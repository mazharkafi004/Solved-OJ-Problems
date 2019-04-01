#include<bits/stdc++.h>
using namespace std;


int main()
{
 int a=0,b=0,c,d,i,n;

 cin>>n;
 int p[n];
 if(n%2==0) {
    c=n/2;
 }
 else {
    c=(n/2)+1;
 }
 for(i=0;i<n;i++) {
    cin>>p[i];
    if(p[i]>0) {
        a++;
    }
   else if(p[i]<0) {
        b++;
    }
 }
d=max(a,b);
if(d>=c) {
    if(d==a) {
        cout<<"1"<<endl;
    }
    else if(d==b) {
        cout<<"-1"<<endl;
    }
}
else {
    cout<<"0"<<endl;
}
}
