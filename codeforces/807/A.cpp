#include<bits/stdc++.h>

using namespace std;

int main() {
long long n;
cin>>n;
vector<long long>p;
long long a,b,c=0,d=0,e=0;
for(long long i=0;i<n;i++) {
    cin>>a>>b;
    if(a==b) {
        d++;
    }
    p.push_back(a);
}
if(d==n) {
    for(long long i=1;i<n;i++) {
    if(p[i]<=p[i-1]) {
        e++;
    }


}
//cout<<e<<endl;
if(e==(n-1)) {
        cout<<"maybe"<<endl;
    }
      else {
        cout<<"unrated"<<endl;
    }
}
else {
    cout<<"rated"<<endl;
}

}
