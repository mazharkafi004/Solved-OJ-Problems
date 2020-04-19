#include<bits/stdc++.h>


using namespace std;

int main() {

 long long n;
 cin>>n;
 while(n--) {
    string s;
    long long t,a=0;
    cin>>t;
    cin>>s;
    for(long long i=0;i<(t-10);i++) {
        if(s[i]=='8'){
            a++;
        }
    }
    if(a==0)
     {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
 }

}
