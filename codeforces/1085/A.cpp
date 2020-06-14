#include<bits/stdc++.h>

using namespace std;

int main() {

long long n=0,m=0,a=0,b=0;
string s;
cin>>s;
string t;
vector<char> q;
n=s.size();
if(n==2) {
    cout<<s<<endl;
    return 0;
}
//cout<<n<<endl;
m=n/2;
 a=0;
if(n%2!=0) {
    m=(n-1)/2;
    t[0]=s[m];
    q.push_back(s[m]);
for(long long i=1;i<n;i+=2) {
    a++;
   // cout<<i<<endl;
  q.push_back(s[m+a]);
 q.push_back(s[m-a]);
    //cout<<s[m+a]<<" "<<s[m-a]<<endl;
    //cout<<t[i]<<" "<<t[i+1]<<endl;
   // i++;
//cout<<t<<endl;
}

}
else {
    m=(n-1)/2;
    q.push_back(s[m]);
    for(long long i=1;i<n-1;i++) {
          a++;
   // cout<<i<<endl;
  if(m+a<=n-1) {
     q.push_back(s[m+a]);
}
if(m-a>=0) {
     q.push_back(s[m-a]);
}
    }
   // q.push_back(s[n-1]);

}
for(long long i=0;i<q.size();i++) {
    cout<<q[i];
}
}
