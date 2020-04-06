#include<bits/stdc++.h>
using namespace std;
int main() {
int a,b,c=-1,d=-1,n;
cin>>n;
int p[n];

for(int i=0;i<n;i++) {
    cin>>p[i];

}

a=0;
b=0;

for(int i=0;i<n;i++) {
   if(p[i]>a) {
        b=a;
    c=d;
    a=p[i];
    d=i+1;
   }
    else if(p[i]>b) {
        b=p[i];
        c=i+1;
    }
}
cout<<d<<" "<<b<<endl;
}