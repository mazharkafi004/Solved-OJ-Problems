#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,t=7;
    cin>>n;
    int p[t];

        int a=1,b,c,d,e,f,g,x,y,z,sum=0;
        for(int i=1;i<=t;i++) {
            cin>>p[i];
        }
        while(sum<n) {
            for(int i=1;i<=t;i++) {
            sum+=p[i];
            a=i;
             if(sum>=n) {
                break;
             }


        }
        }
        cout<<a<<endl;

}
