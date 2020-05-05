#include<bits/stdc++.h>

using namespace std;

int main() {

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
long long a,b,c;
string s;
cin>>s;
cin>>a;
if(s[0]=='f' && a==1) {
    cout<<"L"<<endl;
}
else if(s[0]=='f' && a==2) {
    cout<<"R"<<endl;
}
else if(s[0]=='b' && a==1) {
    cout<<"R"<<endl;
}
if(s[0]=='b' && a==2) {
    cout<<"L"<<endl;
}

}
