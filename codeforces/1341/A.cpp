#include<bits/stdc++.h>

using namespace std;

int main() {

long long t,n,a,b,c,d,x,y,p,q;
cin>>t;
while(t--) {
        long long z=0;
    cin>>n>>a>>b>>c>>d;
    x=(a-b);
    y=(a+b);
    p=c-d;
    q=c+d;
    if(n*x>=p) {
        if(n*x<=q) {
            z++;
        }
        else if (n*y<=q){
            z++;
        }
    }
    else   if(n*y>=p) {
        if(n*x<=q) {
            z++;
        }
        else if (n*y<=q){
            z++;
        }
    }
//    if(n*x || n*y >= p &&n*x || n*y <= q) {
//        z++;
//    }
    if(z==0) {
        cout<<"NO"<<endl;
    }
    else {
        cout<<"YES"<<endl;
    }
    z=0;
}


}
