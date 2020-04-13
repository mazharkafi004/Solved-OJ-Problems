#include<bits/stdc++.h>

using namespace std;

int main() {

 int t;
 cin>>t;
 map<string,int >n;
 string a;
 while(t--) {
    cin>>a;
    if(n.count(a)==0) {
        cout<<"OK"<<endl;
        n[a]=1;
    }
    else {
        cout<<a<<n[a]<<endl;
        n[a]++;
    }
 }
 }


