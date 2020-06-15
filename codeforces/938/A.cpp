#include<bits/stdc++.h>

using namespace std;

int main() {

long long n;
cin>>n;
string s;
cin>>s;
for(long long i=0;i<n-1;i++) {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y') {
        if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'||s[i+1]=='y') {
            s.erase(i+1,1);
            n=n-1;
            i=i-1;
           // cout<<i<<endl;
        }
    }
}
cout<<s<<endl;

}
