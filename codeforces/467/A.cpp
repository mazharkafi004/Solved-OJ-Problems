#include<bits/stdc++.h>

using namespace std;

int main() {

     int a,b,x,k,i,count=0;
     cin>> k;

            for(i=1;i<=k;i++) {

                cin>> a>> b;
                x=b-a;
                if(x>=2) {
                    count++;
                }
               
            }


               cout<<count<<endl;
}
