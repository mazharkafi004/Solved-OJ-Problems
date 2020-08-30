#include<bits/stdc++.h>

using namespace std;

bool compare(string a,string b) {
 return a.size()<b.size();
}

int main() {

 long long t;
 cin>>t;

long long a,b,c,d=0;
 string s;
 vector<string> p;
 for(long long i=0;i<t;i++) {
    cin>>s;
    p.push_back(s);
 }
 sort(p.begin(),p.end(),compare);
 for(long long i=0;i<t-1;i++) {
    if(p[i+1].find(p[i] )== string::npos) {
        cout<<"NO"<<endl;
        return 0;
    }
 }
 cout<<"YES"<<endl;
for(long long i=0;i<t;i++) {
   cout<<p[i]<<endl;
 }

}
