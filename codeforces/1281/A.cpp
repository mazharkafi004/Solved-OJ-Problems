#include<bits/stdc++.h>

using namespace std;
int main() {
int t;
cin>>t;
while(t--) {
    string s;
    cin>>s;
    int m=s.size();
    if(s[m-1]=='o') {
        cout<<"FILIPINO"<<endl;
    }else if(s[m-1]=='u') {
        cout<<"JAPANESE"<<endl;
    }
    else {
        cout<<"KOREAN"<<endl;
    }
}

}
