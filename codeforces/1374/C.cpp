#include<bits/stdc++.h>
using namespace std;

int main() {
 long long t;
 cin>>t;
 while(t--) {
    long long n;
    cin>>n;
    long long a=0,b=0,c=0;
    string s;
    cin>>s;
    for(long long i=0;i<n;i++) {
        if(s[i]=='(') {
             a++;
           }
           else {
            if(a==0) {
                c++;
            }
            else {
                a=a-1;
            }


           }

    }
    cout<<c<<endl;
 }


}
