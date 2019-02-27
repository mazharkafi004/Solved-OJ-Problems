#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,c;

   cin>>a>>b;
    c=a/2+a%2;
    while(c<=a) {
        if(c%b==0) {
            break;
        }
        c++;
    }
   if(c>a) {
    cout<<"-1"<<endl;
   }
   else {
    cout<<c<<endl;
   }

}
