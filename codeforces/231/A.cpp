#include<iostream>

using namespace std;

int main() {
   int a,b,c,d,i,e,count=0;
   cin>>a;
   for(i=1;i<=a;i++) {
    cin>>b>>c>>d;
    e=b+c+d;
    if(e>=2){
        count++;
    }
   }
cout<<count<<endl;
}
