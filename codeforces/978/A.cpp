#include<bits/stdc++.h>

using namespace std;


int main()  {
long long n,c,t=0;
cin>>n;
vector<long long>p,q;
for(long long i=0;i<n;i++) {
    cin>>c;
    p.push_back(c);
}
for(long long i=0;i<n-1;i++) {t=0;
    for(long long j=i+1;j<n;j++) {
            //cout<<p[i]<<" "<<p[j]<<endl;
   if(p[i]==p[j]) {
        t++;
  break;
   }


}
if(t==0) {
    q.push_back(p[i]);
}

}
q.push_back(p[n-1]);
cout<<q.size()<<endl;

for(long long i=0;i<q.size();i++) {
    cout<<q[i]<<" ";
}
cout<<endl;
}
