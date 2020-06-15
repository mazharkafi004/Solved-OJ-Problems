#include<bits/stdc++.h>

using namespace std;


int main() {

 vector<char> p;

 long long n;
 cin>>n;
 string s;
 cin>>s;
 if(n%2==0) {
    for(long long i=0;i<n;i++) {
        if(i%2==0) {
            p.insert(p.begin(),s[i]);
        }
      else  if(i%2==1) {
            p.push_back(s[i]);
        }
    }
 }
else {
        for(long long i=0;i<n;i++) {
        if(i%2==1) {
          p.insert(p.begin(),s[i]);
        }
      else  if(i%2==0) {
            p.push_back(s[i]);
        }
    }
}
for(long long i=0;i<p.size();i++) {
    cout<<p[i];
}
cout<<endl;
}
