#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
    vector<long long>q;
    long long n;
    cin>>n;
    long long p[n];
    for(long long i=0;i<n;i++) {
        cin>>p[i];
    }
    q.push_back(0);
    long long a=0,b=0;
    if(n==2) {
        cout<<n<<endl;
        cout<<p[0]<<" "<<p[1]<<endl;
    }
    else {

      for(long long i=0;i<n-2;i++) {
      if(p[i]<p[i+1] && (p[i+1]>p[i+2])) {
       q.push_back(i+1);
      // cout<<i+1<<endl;
      }
      else if(p[i]>p[i+1] && (p[i+1]<p[i+2])){
        q.push_back(i+1);
        //cout<<i+1<<endl;
      }
    }
    q.push_back(n-1);
    long long d=0;
    d=q.size();
    cout<<d<<endl;
    for(long long i=0;i<d;i++) {
        cout<<p[q[i]]<<" ";
    }
    cout<<endl;
    }
}


}
