#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    long long b,p,f,h,c,a,x,y,z,s=0,q=0;
    cin>>b>>p>>f;
    cin>>h>>c;
    if(b<2) {
        cout<<0<<endl;
    }
    else {
    if(h>c) {
        if(p*2<=b) {
            s=p*h;
            x=b-(p*2);
            if(f*2<=x) {
                q=f*c;
            }
            else {
               q=(x/2)*c;
            }
            s=s+q;
        }
        else {
            s=(b/2)*h;
        }
    }
    else {
         if(f*2<=b) {
            s=f*c;
            x=b-(f*2);
            if(p*2<=x) {
                q=p*h;
            }
            else {
               q=(x/2)*h;
            }
            s=s+q;
        }
        else {
            s=(b/2)*c;
        }
    }
    cout<<s<<endl;
}

}
}
