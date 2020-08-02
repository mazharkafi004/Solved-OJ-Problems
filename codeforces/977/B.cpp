#include<bits/stdc++.h>

using  namespace std;

int main() {

 long long n,a=0,b=0,c=0,m=0;
 string s;
 cin>>n;
 cin>>s;
 string t,r;
 for(long long i=0;i<n-1;i++) {
    t=s[i];
    r=s[i+1];
    for(long long j=i;j<n-1;j++) {
        if(t[0]==s[j] && r[0]==s[j+1]) {
            a++;
            b=j;
        }
    }
    if(a>m) {
        m=a;
        c=b;
    }
    a=0;
 }
//cout<<m<<endl;
cout<<s[c]<<s[c+1]<<endl;
}
