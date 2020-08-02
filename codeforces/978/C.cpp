#include<bits/stdc++.h>
using namespace std;

int main() {
long long n,m;
cin>>n>>m;
vector<long long>p,q;
p.push_back(0);
for(long long i=1;i<=n;i++)
{
    long long a;
    cin>>a;
    p.push_back(a);
}
for(long long i=0;i<m;i++)
{
    long long a;
    cin>>a;
    q.push_back(a);
}
long long a=0,b=1,s=0,t=0;
s=p[b];
t+=p[b-1];
while(m--) {

   if(s>=q[a]) {
//        cout<<b<<" "<<a<<endl;
//     cout<<q[a]<<" "<<p[b-1]<<endl;
    cout<<b<<" "<<q[a]-t<<endl;
    a++;
   }
   else {
    b++;
s+=p[b];
t+=p[b-1];
m++;
   }
}
}

