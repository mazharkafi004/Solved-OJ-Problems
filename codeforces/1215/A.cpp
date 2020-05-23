#include<bits/stdc++.h>

using namespace std;

int main() {
long long a1,a2,k1,k2,n,x=0,y=0,z=0,d=0,e=0,f=0,g=0;
cin>>a1>>a2>>k1>>k2>>n;
d=(a1*(k1-1))+(a2*(k2-1));
if(d>=n) {
    x=0;
}
else {
    x=min((a1+a2),n-d);
}
if(k1>k2) {
    e=a2*k2;
    if(e>n) {
        z=n/k2;
           y=min((a1+a2),z);
    }
    else {
        f=n-e;
    g=f/k1;
       y=min((a1+a2),a2+g);
    }
 //cout<<e<<" "<<g<<endl;

}
else {
       e=a1*k1;
     if(e>n) {
        z=n/k1;
           y=min((a1+a2),z);
    }
    else {
        f=n-e;
    g=f/k2;
       y=min((a1+a2),a1+g);
    }
}
cout<<x<<" "<<y<<endl;
}
