#include<bits/stdc++.h>

using namespace std;


int main() {

 long long t;
 cin>>t;
 while(t--) {
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long a=-1,b=-1,c=0;
    for(long long i=0;i<n;i++) {
        if(s[i]=='1') {
            a=i;
            break;
        }

    }
        for(long long i=n-1;i>=0;i--) {
        if(s[i]=='0') {
            b=i;
            break;
        }

    }
//cout<<a<<" "<<b<<endl;

if(b==-1) {
    cout<<s<<endl;
}
else if (a==-1) {
    cout<<s<<endl;
}
else {
    if(a-1==b) {
        for(long long i=0;i<a;i++) {
            cout<<s[i];
        }
          for(long long i=b+1;i<n;i++) {
            cout<<s[i];
        }
        cout<<endl;
    }
    else {
           for(long long i=0;i<a;i++) {
            cout<<s[i];

        }
        cout<<0;
          for(long long i=b+1;i<n;i++) {
            cout<<s[i];
        }
        cout<<endl;
    }
}



//cout<<endl;
//cout<<b<<" "<<a-1<<endl;
        }






}
