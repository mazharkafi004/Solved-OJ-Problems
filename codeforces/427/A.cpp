#include<bits/stdc++.h>

using namespace std;


int main() {
long long t;
cin>>t;
long long p[t],a=0,b=0,c=0,d=10;
for(long long i=0;i<t;i++) {
    cin>>p[i];
    if(p[i]>0) {
        if(p[i]>d) {
            p[i]=d;
        }
        a+=p[i];
    }
    if(p[i]<0) {
        if(a!=0) {
            a=a-1;
        }
        else {
            b++;
        }
    }
}
cout<<b<<endl;

}
