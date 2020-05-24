#include<bits/stdc++.h>

using namespace std;

int main() {
long long t;
cin>>t;
while(t--) {
        long long n,m;
    cin>>n>>m;
    if(m==1) {
        cout<<n<<endl;
    }
   else  if(n<=m) {
        cout<<1<<endl;
    }
    else {
vector<long long>p;
long long s=0;
for(long long i=1;i<=sqrt(n);i++) {
    if(n%i==0) {
        if(n/i==i) {
            p.push_back(i);
        }
        else {
             p.push_back(i);
              p.push_back(n/i);
        }
    }
}
sort(p.begin(),p.end());
long long k=p.size();


for(long long i=0;i<k;i++) {
    if(p[i]<=m) {
        s=p[i];
    }
}
cout<<n/s<<endl;
    }
}

}
