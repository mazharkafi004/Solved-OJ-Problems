#include<bits/stdc++.h>
using namespace std;

int main() {
long long n;

cin>>n;
vector<long long> q;
long long p[n],a=0,b=0,c=0;
for(long long i=0;i<n;i++) {
    cin>>p[i];

}
sort(p,p+n);
//q[0]=p[0];
for(long long i=0;i<n;i++) {
   if(p[0]==p[i]) {
    //q.push_back(p[i+1]);
    b++;
   }
}
for(long long i=1;i<n;i++) {
   if(p[n-1]==p[i]) {
    //q.push_back(p[i+1]);
    c++;
   }
}
//for(long long i=0;i<q.size();i++) {
//   cout<<q[i]<<" ";
//}
//for(long long i=1;i<n-1;i++) {
//   if(q[i]>q[i-1] && q[i]<q[i+1]) {
//  a++;
//   }
//}
//cout<<b<<" "<<c<<endl;
if(b+c>=2) {
    a=(n-(b+c));
}
else {
    a=(n-(b+c))-2;
}

if(a<0) {
    a=0;
}
cout<<a<<endl;
}
