#include<bits/stdc++.h>

using namespace std;


int main() {

long long n,t,a=0;
cin>>n>>t;
//t=t-1;
string s;
cin>>s;
while(1) {
        a++;
    for(long long i=0;i<n-1;i++) {
        if(s[i]=='B' && s[i+1]=='G') {

            swap(s[i],s[i+1]);

            //cout<<s[i]<<" "<<s[i+1]<<endl;
        i=i+1;
        }
    }
if(a==t) {
    break;
}
}
cout<<s<<endl;

}
