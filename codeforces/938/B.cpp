#include<bits/stdc++.h>

using namespace std;

int main() {
long long n,a=1000000,b=a/2,c;
cin>>n;
deque<long long>p,q;
for(long long i=0;i<n;i++) {
    cin>>c;
    if(c<=b) {
        p.push_back(c);
    }
    else {
        q.push_back(c);
    }
}
sort(p.begin(),p.end());
sort(q.begin(),q.end());
long long d=p.size(),e=q.size();
//for(long long i=0;i<d && d>0;i++) {
//    cout<<p[i]<<" ";
//}
//cout<<endl;
////cout<<p[d-2]<<endl;
//for(long long i=0;i<e && e>0;i++) {
//    cout<<q[i]<<" ";
//}
//cout<<endl;

long long x=0;
if(d>0) {
    x=(p[d-1])-1;
}

//cout<<x<<endl;
long long y=0;
if(e>0) {
    y=a-q[0];
}
//cout<<y<<endl;
cout<<max(x,y)<<endl;


}
