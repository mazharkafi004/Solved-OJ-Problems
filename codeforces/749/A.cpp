#include<bits/stdc++.h>
using namespace std;



int main()
{
int n,a,b,c,d,e,i;
cin>>a;
b=a%2;
if(b==0) {
    d=a/2;
     cout<<d<<endl;
    for(i=0;i<d;i++) {

        cout<<"2 ";
    }
    cout<<""<<endl;
}
else {
     d=a/2;
    cout<<d<<endl;
    for(i=0;i<d-1;i++) {

        cout<<"2 ";
    }
    cout<<"3"<<endl;
}
    }
