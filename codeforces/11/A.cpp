#include<bits/stdc++.h>

using namespace std;

int main() {

long long a=0,b=0,c,n,t;
cin>>n>>t;
vector<long long>p;
for(long long i=0;i<n;i++) {
    cin>>c;
    p.push_back(c);
}
a=0;
for(long long i=1;i<n;i++) {

    if(p[i]==p[i-1]) {
        a++;
        p[i]=p[i-1]+t;
    }
    else  if(p[i-1]>p[i]) {
        b=p[i-1]-p[i];

            a=a+(b/t)+1;
            //cout<<a<<endl;
            p[i]=p[i]+(t*((b/t)+1));

    }
}
//for(long long i=0;i<n;i++) {
//    cout<<p[i]<<" ";
//}
//cout<<endl;

cout<<a<<endl;}
