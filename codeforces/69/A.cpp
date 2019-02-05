#include<bits/stdc++.h>
using namespace std;

int main() {

int a=0,b=0,c=0,d,e,f,n,i;
cin>>n;

for(i=0;i<n;i++){
    cin>>d>>e>>f;
    a+=d;
    b+=e;
    c+=f;
}
if(a==0 && b==0 && c==0) {
    cout<<"YES"<<endl;
}
else  {cout<<"NO"<<endl;}
return 0;
}

