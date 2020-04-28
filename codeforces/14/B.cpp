#include<bits/stdc++.h>

using namespace std;
#define INF 10000000
//#define INF 0x3f3f3f3f
int main() {
long long p=INF,q, n,x0,m[10000]={0};
cin>>n>>x0;
q=n;
for(int i=0;i<n;i++) {
        long long a,b,c,d,z,x,y;
    cin>>a>>b;

 if(a>b)
    {swap(a,b);}
//cout<<a<<b<<endl;
 for(long long j=a;j<=b;j++) {
       // cout<<m[i]<<endl;
    m[j]++;
    if(m[j]==n) {
        if(abs(j-x0)<p){
            p=abs(j-x0);}
//break;
    }
 }
 //cout<<p<<endl;
}

//cout<<INF<<endl;
if(p==INF)
 {
   p=-1;
 }

cout<<p<<endl;



}
