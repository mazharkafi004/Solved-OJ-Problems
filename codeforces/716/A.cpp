#include<bits/stdc++.h>


using namespace std;
//#define typedef long long ll


int main() {

long long a,b,c,x,y=0,t,n;
cin>>t>>c;
long long p[t];
for(long long i=0;i<t;i++) {
    cin>>p[i];
}
//for(long long i=0;i<t;i++) {
//    cout<<p[i];
//}
for(long long i=0;i<t-1;i++) {
    y++;
   // cout<<p[i]<<p[i+1]<<c<<endl;
    if(p[i+1]-p[i]>c) {
        y=0;
    }
    //cout<<y<<endl;
}


    cout<<y+1<<endl;

}
