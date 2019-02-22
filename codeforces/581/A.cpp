#include<bits/stdc++.h>

using namespace std;

int main() {
int a,b,c,d,e=0,f=0,g=0;
cin>>a>>b;
if(a>b)
{
    c=a-b;
    e=floor(c/2);
  cout<<b<<" "<<e<<endl;
}
else if(a<b) {
    d=b-a;
    f=floor(d/2);
     cout<<a<<" "<<f<<endl;

}
else {
cout<<a<<" "<<g<<endl;
}
}